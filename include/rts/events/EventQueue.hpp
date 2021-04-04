/*
** EPITECH PROJECT, 2021
** B-OOP-400-TLS-4-1-arcade-guillaume.mailhol
** File description:
** EventQueue
*/

#ifndef EVENTQUEUE_HPP_
#define EVENTQUEUE_HPP_

#include <functional>
#include <iostream>
#include <memory>
#include <queue>
#include <vector>

namespace arcade {

template <typename T> class EventQueue {
public:
    using EventCallback = std::function<void(const T&)>;

    class IEventQueueNode {
    public:
        ~IEventQueueNode() = default;
        virtual void pull(EventCallback callback) = 0;
    };

    std::unique_ptr<IEventQueueNode> subscribe()
    {
        return std::make_unique<EventQueueNode>(m_events);
    };

    void push(const T& event)
    {
        m_events.push_back(event);
    }

protected:
private:
    class EventQueueNode : public IEventQueueNode {
    public:
        EventQueueNode(const std::vector<T>& event_queue)
            : m_event_queue(event_queue)
        {
            m_index = 0;
        };

        void pull(std::function<void(const T& event)> callback)
        {
            if (m_event_queue.empty() || m_event_queue.size() == m_index) {
                return;
            }
            for (; m_index != m_event_queue.size(); m_index++) {
                callback(m_event_queue[m_index]);
            }
        };

    private:
        std::size_t m_index;
        const std::vector<T>& m_event_queue;
    };

    std::vector<T> m_events;
};
}

#endif /* !EVENTQUEUE_HPP_ */
