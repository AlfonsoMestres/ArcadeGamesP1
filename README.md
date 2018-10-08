# ArcadeGamesP1

First practise for ArcadeGames.

Contains:

### Vector3.cpp / Vector3.h

##### Constructors

```
Vector3();
Vector3(T newX, T newY, T newZ);
Vector3(const Vector3<T>& newVec);
```

##### Functions

```
Vector3<T> operator+(const Vector3<T>& addedVec3);
float distance_to(const Vector3<T>& toVec3);
Vector3<float> normalize();
void printVector();
```


### String.cpp / String.h

##### Constructors

```
String(const char* str);
String(String* str);
```

##### Functions

```
int length();
void clear();
bool operator==(const String& strB);
String operator+(String& appendStr);
```
