#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "List.h"
#include "OList.h"
#include "Node.h"


TEST_CASE("Constructor") {
    OList *l = new OList();
    CHECK(l->toString() == "nullptr");
}

TEST_CASE("Deconstructor") {
    OList *l = new OList();
    l->insert("1");
    l->insert("2");
    l->insert("3");
    CHECK(l->length() == 3);
    delete l;
}

TEST_CASE("insert") {
    OList *l = new OList();
    l->insert("1");
    CHECK(l->get(0) == "1");
    l->insert("2");
    CHECK(l->get(1) == "2");
}

TEST_CASE("toString") {
    OList *l = new OList();
    l->insert("1");
    l->insert("2");
    CHECK(l->toString() == "1-->2-->nullptr");
}

TEST_CASE("contains") {
    OList *l = new OList();
    l->insert("1");
    l->insert("2");
    CHECK(l->contains("2") == true);
    CHECK(l->contains("10") == false);
}

TEST_CASE("get") {
    OList *l = new OList();
    l->insert("1");
    l->insert("2");
    l->insert("3");
    CHECK(l->get(0) == "1");
    CHECK(l->get(2) == "3");
    CHECK(l->get(-2) == "Our get is out of range");
}

TEST_CASE("remove") {
    OList *l = new OList();
    l->insert("1");
    l->insert("2");
    l->insert("3");
    CHECK(l->remove(1));
    CHECK(l->get(0) == "1");
    CHECK(l->get(1) == "3");
}

TEST_CASE("reverse") {
    OList *l = new OList();
    l->insert("1");
    l->insert("2");
    l->insert("3");
    CHECK(l->toString() == "1-->2-->3-->nullptr");
    l->reverse();
    CHECK(l->toString() == "3-->2-->1-->nullptr");
}