#include<stdio.h>
struct m_owners
{
	char m_name[20];
	int m_price;
};
void list(struct m_owners *x)
{
	printf("enter ur mobile name:\n");
	scanf("%s",&x->m_name);
	printf("enter ur mobile price:\n");
	scanf("%d",&x->m_price);
}
void display(struct m_owners x)
{
	printf("name = %s",x.m_name);
	printf("price = %d",x.m_price);
}
void main()
{
	struct m_owners own1,own2;
	list(&own1);
	display(own1);
	list(&own2);
	display(own2);
}
