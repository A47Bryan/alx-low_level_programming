#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data
 * @name:dog's name
 * @age:  dog's age
 * @owner: name of the of the dog's owner
 *
 * Description: Defines metadata about the dog and type of dog's struct
 */

typedef struct dog
{
	char *name;
	float *age;
	char *owner;
};
int main(void)
{
	struct dog Dog;
	Dog.name="Poppy";
	Dog.age=3;
	Dog.owner="Tim";
	printf("My name is %s\n", Dog.name);
	printf("I am %.1f\n", Dog.age);
	printf("My owner is %s\n", Dog.owner);

	return 0;
}
