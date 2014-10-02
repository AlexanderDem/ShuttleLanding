#ifndef SPACEOBJECT_H
#define SPACEOBJECT_H


class SpaceObject
{
    public:
        void create_object(float object_x, float object_y, float object_z, float object_mass)
        {
            x = object_x;
            y = object_y;
            z = object_z;
            mass = object_mass;
        }

        float get_x()
        {
            return x;
        }

        float get_y()
        {
            return y;
        }

        float get_z()
        {
            return z;
        }

        float get_mass()
        {
            return mass;
        }

    private:
        float x;
        float y;
        float z;
        float mass;
};

#endif // SPACEOBJECT_H
