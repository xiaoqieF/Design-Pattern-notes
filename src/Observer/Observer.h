//
// Created by fxd on 22-9-30.
//

#ifndef DESIGNPATTERNS_NOTES_OBSERVER_H
#define DESIGNPATTERNS_NOTES_OBSERVER_H
#include <memory>
#include <utility>

namespace observer {
    class Subject;
    // observer interface
    class Observer : public std::enable_shared_from_this<Observer>{
    public:
        virtual ~Observer() = default;
        virtual void attachSubject(const std::shared_ptr<Subject>& subject);
        virtual void update() = 0;
    protected:
        std::shared_ptr<Subject> subject_;
    };

    class DecObserver : public Observer{
    public:
        void update() override;
    };

    class OctObserver : public Observer {
    public:
        void update() override;
    };

    class HexObserver: public Observer{
    public:
        void update() override;
    };
}


#endif //DESIGNPATTERNS_NOTES_OBSERVER_H
