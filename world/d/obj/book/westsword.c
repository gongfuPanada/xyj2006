
//西洋剑术

inherit ITEM;
void create()
{
        set_name("〖花剑入门〗", ({"hua jian", "book"}));
        set_weight(1000);
        if( clonep() )
        set_default_object(__FILE__);
        else {
        set("unit", "本");
        set("value", 100);
  set("long",
"一本薄薄的小册子．\n传说从西洋进贡而来．\n．．．．\n");
        set("material", "paper");
        set("skill", ([
                        "name": "westsword",
                        "sen_cost": 10,
                        "difficulty": 10,
                        "max_skill": 100,
]) );
        }
}

