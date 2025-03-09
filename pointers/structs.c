struct Person
{
    char *name;
    int age;
};

struct Person create(char *name, int age)
{
    struct Person new_person;
    new_person.name = name;
    new_person.age = age;
    return new_person;
}

struct Person * create_pointer(char *name, int age)
{
    static struct Person new_person;
    new_person.name = name;
    new_person.age = age;
    return &new_person;
}

int main(int argc, char const *argv[])
{
    struct Person me;
    me.name = "Richard";
    me.age = 42;

    struct Person via_method = create("Kerry", 39);
    struct Person via_method_pointer = create("Kerry", 39);

    return 0;
}
