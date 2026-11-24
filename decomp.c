/* _init @ 00100618 */

  

int _init(EVP_PKEY_CTX *ctx)

  

{

int iVar1;

iVar1 = 0;

if (PTR___gmon_start___00306fe8 != (undefined *)0x0) {

iVar1 = (*(code *)PTR___gmon_start___00306fe8)();

}

return iVar1;

}

  
  

/* FUN_00100630 @ 00100630 */

  

void FUN_00100630(void)

  

{

(*(code *)PTR_00306fa8)();

return;

}

  
  

/* _start @ 001006a0 */

  

void processEntry _start(undefined8 param_1,undefined8 param_2,undefined1 param_3)

  

{

undefined1 auStack_8 [8];

(*(code *)PTR___libc_start_main_00306fe0)

(main,param_2,&param_3,__libc_csu_init,__libc_csu_fini,param_1,auStack_8);

do {

/* WARNING: Do nothing block with infinite loop */

} while( true );

}

  
  

/* deregister_tm_clones @ 001006d0 */

  

/* WARNING: Removing unreachable block (ram,0x001006e7) */

/* WARNING: Removing unreachable block (ram,0x001006f3) */

  

void deregister_tm_clones(void)

  

{

return;

}

  
  

/* register_tm_clones @ 00100710 */

  

/* WARNING: Removing unreachable block (ram,0x00100738) */

/* WARNING: Removing unreachable block (ram,0x00100744) */

  

void register_tm_clones(void)

  

{

return;

}

  
  

/* __do_global_dtors_aux @ 00100760 */

  

void __do_global_dtors_aux(void)

  

{

if (completed_7698 != '\0') {

return;

}

if (PTR___cxa_finalize_00306ff8 != (undefined *)0x0) {

__cxa_finalize(__dso_handle);

}

deregister_tm_clones();

completed_7698 = 1;

return;

}

  
  

/* frame_dummy @ 001007a0 */

  

void frame_dummy(void)

  

{

register_tm_clones();

return;

}

  
  

/* get_instructions @ 001007aa */

  

int get_instructions(t_ps *ps)

  

{

int iVar1;

long in_FS_OFFSET;

int local_20;

int local_1c;

char *local_18;

long local_10;

local_10 = *(long *)(in_FS_OFFSET + 0x28);

local_20 = 0;

while (local_20 != -1) {

local_1c = get_next_line(0,&local_18);

if (local_1c != 1) break;

local_20 = local_20 + 1;

iVar1 = ft_strcmp(local_18,"sa\n");

if (iVar1 == 0) {

LAB_0010081a:

swap_operations(ps,local_18);

}

else {

iVar1 = ft_strcmp(local_18,"sb\n");

if (iVar1 == 0) goto LAB_0010081a;

iVar1 = ft_strcmp(local_18,"ss\n");

if (iVar1 == 0) goto LAB_0010081a;

iVar1 = ft_strcmp(local_18,"pa\n");

if (iVar1 == 0) {

LAB_00100860:

push_operations(ps,local_18);

}

else {

iVar1 = ft_strcmp(local_18,"pb\n");

if (iVar1 == 0) goto LAB_00100860;

iVar1 = ft_strcmp(local_18,"ra\n");

if (iVar1 == 0) {

LAB_001008bd:

rotate_operations(ps,local_18);

}

else {

iVar1 = ft_strcmp(local_18,"rb\n");

if (iVar1 == 0) goto LAB_001008bd;

iVar1 = ft_strcmp(local_18,"rr\n");

if (iVar1 == 0) goto LAB_001008bd;

iVar1 = ft_strcmp(local_18,"rra\n");

if (iVar1 == 0) {

LAB_00100917:

reverse_operations(ps,local_18);

}

else {

iVar1 = ft_strcmp(local_18,"rrb\n");

if (iVar1 == 0) goto LAB_00100917;

iVar1 = ft_strcmp(local_18,"rrr\n");

if (iVar1 == 0) goto LAB_00100917;

local_20 = -1;

}

}

}

}

ft_strdel(&local_18);

}

if ((local_20 == -1) || (local_1c == -1)) {

iVar1 = -1;

}

else {

iVar1 = 0;

}

if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {

/* WARNING: Subroutine does not return */

__stack_chk_fail();

}

return iVar1;

}

  
  

/* main @ 00100991 */

  

int main(int argc,char **argv)

  

{

int iVar1;

t_ps *ps;

ps = malloc(0x68);

if (ps == (t_ps *)0x0) {

return -1;

}

if (1 < argc) {

iVar1 = parser(argc,argv,ps);

if ((iVar1 == -1) || (iVar1 == -2)) {

iVar1 = error(ps,iVar1);

return iVar1;

}

visual(ps);

iVar1 = get_instructions(ps);

if (iVar1 == -1) {

iVar1 = error(ps,-3);

return iVar1;

}

iVar1 = check_order_stack(ps);

if ((iVar1 == 0) && (ps->total == ps->size_a)) {

ft_putendl("OK");

}

else {

ft_putendl("KO");

}

ft_free(ps);

}

free(ps);

return 0;

}

  
  

/* is_few_numbers @ 00100a8d */

  

undefined8 is_few_numbers(int *param_1)

  

{

undefined8 uVar1;

if (*param_1 < 4) {

uVar1 = 1;

}

else {

uVar1 = 0xffffffff;

}

return uVar1;

}

  
  

/* sort_few_numbers @ 00100aae */

  

void sort_few_numbers(int *param_1)

  

{

if (*param_1 == 3) {

sort3_a(param_1);

}

if (*param_1 == 2) {

sort2_a(param_1);

}

return;

}

  
  

/* is_almost_sorted @ 00100aeb */

  

undefined8 is_almost_sorted(int *param_1)

  

{

undefined8 uVar1;

int local_c;

local_c = 0;

while (*(int *)(*(long *)(param_1 + 4) + (long)local_c * 4) <

*(int *)(*(long *)(param_1 + 4) + ((long)local_c + 1) * 4)) {

local_c = local_c + 1;

}

if ((*(int *)(*(long *)(param_1 + 4) + (long)local_c * 4) == param_1[2]) &&

(*(int *)(*(long *)(param_1 + 4) + ((long)local_c + 1) * 4) == param_1[1])) {

do {

local_c = local_c + 1;

if (*param_1 + -1 <= local_c) break;

} while (*(int *)(*(long *)(param_1 + 4) + (long)local_c * 4) <

*(int *)(*(long *)(param_1 + 4) + ((long)local_c + 1) * 4));

if ((local_c == *param_1 + -1) &&

(*(int *)(*(long *)(param_1 + 4) + (long)local_c * 4) < **(int **)(param_1 + 4))) {

uVar1 = 1;

}

else {

uVar1 = 0xffffffff;

}

}

else {

uVar1 = 0xffffffff;

}

return uVar1;

}

  
  

/* sort_almost_sorted @ 00100c17 */

  

void sort_almost_sorted(t_ps *param_1)

  

{

int iVar1;

int local_c;

for (local_c = 0; param_1->a[local_c] != param_1->max; local_c = local_c + 1) {

}

while ((param_1->total / 2 <= local_c && (iVar1 = check_order_stack(param_1), iVar1 != 0))) {

operation(param_1,"rra\n");

reverse_operations(param_1,"rra\n");

}

while ((local_c < param_1->total / 2 && (iVar1 = check_order_stack(param_1), iVar1 != 0))) {

operation(param_1,"ra\n");

rotate_operations(param_1,"ra\n");

}

return;

}

  
  

/* nblen @ 00100ced */

  

int nblen(int n)

  

{

int local_1c;

int local_c;

local_c = 0;

local_1c = n;

if ((n < 0) || (n == 0)) {

local_c = 1;

}

for (; local_1c != 0; local_1c = local_1c / 10) {

local_c = local_c + 1;

}

return local_c;

}

  
  

/* ft_lennb @ 00100d37 */

  

int ft_lennb(char *param_1)

  

{

int local_10;

int local_c;

local_c = 0;

local_10 = 0;

if ((*param_1 == '+') || (*param_1 == '-')) {

local_c = 1;

}

for (; param_1[local_c] == '0'; local_c = local_c + 1) {

}

for (; param_1[local_c] != '\0'; local_c = local_c + 1) {

local_10 = local_10 + 1;

}

return local_10;

}

  
  

/* check_atoi @ 00100db6 */

  

int check_atoi(char *s)

  

{

int iVar1;

long lVar2;

int local_18;

int local_14;

local_18 = 0;

local_14 = 0;

if (((*s == '+') || (*s == '-')) && (iVar1 = ft_isdigit((int)s[1]), iVar1 == 1)) {

local_18 = 1;

}

for (; s[local_18] == '0'; local_18 = local_18 + 1) {

}

while (iVar1 = ft_isdigit((int)s[local_14 + local_18]), iVar1 != 0) {

local_14 = local_14 + 1;

}

iVar1 = ft_isdigit((int)s[local_14 + local_18]);

if ((iVar1 == 0) && (s[local_14 + local_18] != '\0')) {

iVar1 = -1;

}

else {

lVar2 = ft_atol(s);

if ((lVar2 < -0x80000000) || ((0x7fffffff < lVar2 || (10 < local_14)))) {

iVar1 = -1;

}

else {

iVar1 = 0;

}

}

return iVar1;

}

  
  

/* check_double @ 00100edc */

  

int check_double(int *tab,int len)

  

{

int local_10;

int local_c;

local_10 = 0;

do {

if (len <= local_10) {

return 0;

}

for (local_c = 0; local_c < len; local_c = local_c + 1) {

if ((tab[local_10] == tab[local_c]) && (local_10 != local_c)) {

return -1;

}

}

local_10 = local_10 + 1;

} while( true );

}

  
  

/* error @ 00100f57 */

  

int error(t_ps *ps,int code)

  

{

if (code == -1) {

free(ps->a);

free(ps->b);

}

else if (code == -3) {

ft_free(ps);

}

free(ps);

write(2,"Error\n",6);

return -1;

}

  
  

/* swap_operations @ 00100fc9 */

  

void swap_operations(t_ps *ps,char *op)

  

{

int *piVar1;

int *piVar2;

int iVar3;

int iVar4;

int iVar5;

iVar3 = ft_strcmp(op,"sa\n");

if ((iVar3 == 0) && (1 < ps->size_a)) {

piVar1 = ps->a;

iVar3 = top(ps,'a');

iVar3 = piVar1[iVar3];

piVar1 = ps->a;

iVar4 = top(ps,'a');

piVar2 = ps->a;

iVar5 = top(ps,'a');

piVar2[iVar5] = piVar1[(long)iVar4 + 1];

piVar1 = ps->a;

iVar4 = top(ps,'a');

piVar1[(long)iVar4 + 1] = iVar3;

}

else {

iVar3 = ft_strcmp(op,"sb\n");

if ((iVar3 == 0) && (1 < ps->size_b)) {

piVar1 = ps->b;

iVar3 = top(ps,'b');

iVar3 = piVar1[iVar3];

piVar1 = ps->b;

iVar4 = top(ps,'b');

piVar2 = ps->b;

iVar5 = top(ps,'b');

piVar2[iVar5] = piVar1[(long)iVar4 + 1];

piVar1 = ps->b;

iVar4 = top(ps,'b');

piVar1[(long)iVar4 + 1] = iVar3;

}

else {

iVar3 = ft_strcmp(op,"ss\n");

if (iVar3 == 0) {

swap_operations(ps,"sa\n");

swap_operations(ps,"sb\n");

}

}

}

visual(ps);

return;

}

  
  

/* push_operations @ 001011cc */

  

void push_operations(t_ps *ps,char *op)

  

{

int *piVar1;

int *piVar2;

int iVar3;

int iVar4;

iVar3 = ft_strcmp(op,"pa\n");

if ((iVar3 == 0) && (0 < ps->size_b)) {

piVar1 = ps->b;

iVar3 = top(ps,'b');

piVar2 = ps->a;

iVar4 = top(ps,'a');

piVar2[(long)iVar4 + -1] = piVar1[iVar3];

piVar1 = ps->b;

iVar3 = top(ps,'b');

piVar1[iVar3] = 0;

ps->size_b = ps->size_b + -1;

ps->size_a = ps->size_a + 1;

}

else {

iVar3 = ft_strcmp(op,"pb\n");

if ((iVar3 == 0) && (0 < ps->size_a)) {

piVar1 = ps->a;

iVar3 = top(ps,'a');

piVar2 = ps->b;

iVar4 = top(ps,'b');

piVar2[(long)iVar4 + -1] = piVar1[iVar3];

piVar1 = ps->a;

iVar3 = top(ps,'a');

piVar1[iVar3] = 0;

ps->size_a = ps->size_a + -1;

ps->size_b = ps->size_b + 1;

}

}

iVar3 = top(ps,'a');

ps->top_a = iVar3;

iVar3 = top(ps,'b');

ps->top_b = iVar3;

visual(ps);

return;

}

  
  

/* rotate_operations @ 001013b0 */

  

void rotate_operations(t_ps *ps,char *op)

  

{

int iVar1;

int local_10;

iVar1 = ft_strcmp(op,"ra\n");

if ((iVar1 == 0) && (0 < ps->size_a)) {

local_10 = top(ps,'a');

iVar1 = ps->a[local_10];

while (local_10 = local_10 + 1, local_10 < ps->total) {

ps->a[(long)local_10 + -1] = ps->a[local_10];

}

ps->a[(long)ps->total + -1] = iVar1;

}

else {

iVar1 = ft_strcmp(op,"rb\n");

if ((iVar1 == 0) && (0 < ps->size_b)) {

local_10 = top(ps,'b');

iVar1 = ps->b[local_10];

while (local_10 = local_10 + 1, local_10 < ps->total) {

ps->b[(long)local_10 + -1] = ps->b[local_10];

}

ps->b[(long)ps->total + -1] = iVar1;

}

else {

iVar1 = ft_strcmp(op,"rr\n");

if (iVar1 == 0) {

rotate_operations(ps,"ra\n");

rotate_operations(ps,"rb\n");

}

}

}

visual(ps);

return;

}

  
  

/* reverse_operations @ 0010158b */

  

void reverse_operations(t_ps *ps,char *op)

  

{

int *piVar1;

int iVar2;

int iVar3;

int iVar4;

int local_20;

local_20 = ps->total + -1;

iVar2 = ft_strcmp(op,"rra\n");

if ((iVar2 == 0) && (0 < ps->size_a)) {

iVar2 = ps->a[(long)ps->total + -1];

while( true ) {

iVar4 = local_20 + -1;

iVar3 = top(ps,'a');

if (local_20 <= iVar3) break;

ps->a[(long)iVar4 + 1] = ps->a[iVar4];

local_20 = iVar4;

}

piVar1 = ps->a;

iVar4 = top(ps,'a');

piVar1[iVar4] = iVar2;

}

else {

iVar2 = ft_strcmp(op,"rrb\n");

if ((iVar2 == 0) && (0 < ps->size_b)) {

iVar2 = ps->b[(long)ps->total + -1];

while( true ) {

iVar4 = local_20 + -1;

iVar3 = top(ps,'b');

if (local_20 <= iVar3) break;

ps->b[(long)iVar4 + 1] = ps->b[iVar4];

local_20 = iVar4;

}

piVar1 = ps->b;

iVar4 = top(ps,'b');

piVar1[iVar4] = iVar2;

}

else {

iVar2 = ft_strcmp(op,"rrr\n");

if (iVar2 == 0) {

reverse_operations(ps,"rra\n");

reverse_operations(ps,"rrb\n");

}

}

}

visual(ps);

return;

}

  
  

/* operation @ 0010178c */

  

void operation(long param_1,undefined8 param_2)

  

{

undefined8 uVar1;

uVar1 = ft_strjoin(*(undefined8 *)(param_1 + 0x60),param_2);

free(*(void **)(param_1 + 0x60));

*(undefined8 *)(param_1 + 0x60) = uVar1;

return;

}

  
  

/* delete @ 001017d6 */

  

void delete(long param_1,char *param_2)

  

{

int iVar1;

long lVar2;

char *pcVar3;

undefined8 uVar4;

long lVar5;

while( true ) {

lVar5 = ft_strstr(*(undefined8 *)(param_1 + 0x60),param_2);

if (lVar5 == 0) break;

iVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),param_2);

iVar1 = iVar1 - (int)*(undefined8 *)(param_1 + 0x60);

lVar5 = ft_strlen(*(char **)(param_1 + 0x60));

lVar2 = ft_strlen(param_2);

pcVar3 = ft_strnew(lVar5 - lVar2);

pcVar3 = ft_strncpy(pcVar3,*(char **)(param_1 + 0x60),(long)iVar1);

lVar5 = *(long *)(param_1 + 0x60);

lVar2 = ft_strlen(param_2);

uVar4 = ft_strcat(pcVar3,lVar5 + lVar2 + iVar1);

free(*(void **)(param_1 + 0x60));

*(undefined8 *)(param_1 + 0x60) = uVar4;

}

return;

}

  
  

/* delete_operations @ 001018e5 */

  

void delete_operations(undefined8 param_1)

  

{

delete(param_1,"\npa\npb");

delete(param_1,"\npb\npa");

delete(param_1,"\nra\nrra");

delete(param_1,"\nrb\nrrb");

delete(param_1,"\nrra\nra");

delete(param_1,"\nrrb\nrb");

delete(param_1,"\nsa\nsa");

delete(param_1,"\nsb\nsb");

return;

}

  
  

/* replace @ 0010198c */

  

void replace(long param_1,char *param_2,char *param_3)

  

{

int iVar1;

long lVar2;

long lVar3;

char *pcVar4;

undefined8 uVar5;

long lVar6;

while( true ) {

lVar6 = ft_strstr(*(undefined8 *)(param_1 + 0x60),param_2);

if (lVar6 == 0) break;

iVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),param_2);

iVar1 = iVar1 - (int)*(undefined8 *)(param_1 + 0x60);

lVar6 = ft_strlen(*(char **)(param_1 + 0x60));

lVar2 = ft_strlen(param_2);

lVar3 = ft_strlen(param_3);

pcVar4 = ft_strnew(lVar3 + (lVar6 - lVar2));

pcVar4 = ft_strncpy(pcVar4,*(char **)(param_1 + 0x60),(long)iVar1);

uVar5 = ft_strcat(pcVar4,param_3);

lVar6 = *(long *)(param_1 + 0x60);

lVar2 = ft_strlen(param_2);

uVar5 = ft_strcat(uVar5,lVar6 + lVar2 + iVar1);

free(*(void **)(param_1 + 0x60));

*(undefined8 *)(param_1 + 0x60) = uVar5;

}

return;

}

  
  

/* optimize @ 00101ac2 */

  

void optimize(long param_1)

  

{

long lVar1;

do {

lVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),"\npa\npb");

if (lVar1 == 0) {

lVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),"\npb\npa");

if (lVar1 == 0) {

lVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),"\nra\nrra");

if (lVar1 == 0) {

lVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),"\nrb\nrrb");

if (lVar1 == 0) {

lVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),"\nrra\nra");

if (lVar1 == 0) {

lVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),"\nrrb\nrb");

if (lVar1 == 0) {

lVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),"\nsa\nsa");

if (lVar1 == 0) {

lVar1 = ft_strstr(*(undefined8 *)(param_1 + 0x60),"\nsb\nsb");

if (lVar1 == 0) {

replace(param_1,"\nsa\nsb\n","\nss\n");

replace(param_1,"\nsb\nsa\n","\nss\n");

replace(param_1,"\nrra\nrrb\n","\nrrr\n");

replace(param_1,"\nrrb\nrra\n","\nrrr\n");

replace(param_1,"\nra\nrb\n","\nrr\n");

replace(param_1,"\nrb\nra\n","\nrr\n");

return;

}

}

}

}

}

}

}

}

delete_operations(param_1);

} while( true );

}

  
  

/* bubble_sort @ 00101c6b */

  

int * bubble_sort(int *tab,int len)

  

{

int iVar1;

int local_14;

int local_10;

for (local_14 = 0; local_10 = local_14, local_14 < len; local_14 = local_14 + 1) {

while (local_10 = local_10 + 1, local_10 < len) {

if (tab[local_10] < tab[local_14]) {

iVar1 = tab[local_14];

tab[local_14] = tab[local_10];

tab[local_10] = iVar1;

}

}

}

return tab;

}

  
  

/* count_argnb @ 00101d45 */

  

int count_argnb(char *arg)

  

{

int iVar1;

char **tab;

int local_18;

int local_14;

tab = ft_strsplit(arg,' ');

local_18 = 0;

local_14 = 0;

while( true ) {

if (tab[local_18] == (char *)0x0) {

ft_tabdel(tab);

if (local_14 == 0) {

local_14 = -1;

}

return local_14;

}

iVar1 = check_atoi(tab[local_18]);

if (iVar1 == -1) break;

local_14 = local_14 + 1;

local_18 = local_18 + 1;

}

ft_tabdel(tab);

return -1;

}

  
  

/* get_argtable @ 00101def */

  

int * get_argtable(int total,char **argv,int argi,int n)

  

{

int iVar1;

int *piVar2;

char **tab;

int local_4c;

int local_40;

int local_2c;

piVar2 = ft_init_int(total);

local_4c = n;

local_40 = argi;

while ((argv[local_40] != (char *)0x0 && (piVar2 != (int *)0x0))) {

local_2c = 0;

if ((argv[local_40] != (char *)0x0) &&

(tab = ft_strsplit(argv[local_40],' '), tab != (char **)0x0)) {

for (; tab[local_2c] != (char *)0x0; local_2c = local_2c + 1) {

iVar1 = ft_atoi(tab[local_2c]);

piVar2[local_4c] = iVar1;

local_4c = local_4c + 1;

}

local_40 = local_40 + 1;

ft_tabdel(tab);

}

}

return piVar2;

}

  
  

/* initialize @ 00101f0d */

  

void initialize(t_ps *ps)

  

{

int iVar1;

int *piVar2;

char *pcVar3;

piVar2 = ft_init_int(ps->total);

ps->sorted = piVar2;

piVar2 = copy_inttab(ps->a,ps->sorted,0,ps->total + -1);

ps->sorted = piVar2;

piVar2 = bubble_sort(ps->sorted,ps->total);

ps->sorted = piVar2;

ps->min = *ps->sorted;

ps->max = ps->sorted[(long)ps->total + -1];

ps->size_a = ps->total;

ps->size_b = 0;

if (ps->a != (int *)0x0) {

ps->bottom_a = ps->a[(long)ps->total + -1];

}

piVar2 = ft_init_int(1);

ps->pibon = piVar2;

ps->pibon_len = 1;

*ps->pibon = ps->min;

ps->pibon_idx = 0;

iVar1 = top(ps,'a');

ps->top_a = iVar1;

iVar1 = top(ps,'b');

ps->top_b = iVar1;

pcVar3 = ft_strnew(1);

ps->ops = pcVar3;

return;

}

  
  

/* parser @ 0010208d */

  

int parser(int argc,char **argv,t_ps *ps)

  

{

int iVar1;

int *piVar2;

int local_10;

ps->total = 0;

ps->size_a = 0;

ps->size_b = 0;

local_10 = debug(ps,argv,argc);

while( true ) {

if (argc <= local_10) {

iVar1 = debug(ps,argv,argc);

piVar2 = get_argtable(ps->total,argv,iVar1,0);

ps->a = piVar2;

if (ps->a != (int *)0x0) {

piVar2 = ft_init_int(ps->total);

ps->b = piVar2;

}

iVar1 = check_double(ps->a,ps->total);

if (iVar1 == -1) {

iVar1 = -1;

}

else {

initialize(ps);

iVar1 = 0;

}

return iVar1;

}

iVar1 = count_argnb(argv[local_10]);

if (iVar1 == -1) {

iVar1 = -1;

}

else {

iVar1 = ps->total + iVar1;

}

ps->total = iVar1;

if (ps->total == -1) break;

local_10 = local_10 + 1;

}

return -2;

}

  
  

/* pibon_index @ 001021d5 */

  

int pibon_index(int *param_1,char param_2)

  

{

int local_c;

local_c = 0;

if (param_2 == 'a') {

local_c = param_1[10];

while ((local_c < *param_1 + -1 &&

(*(int *)(*(long *)(param_1 + 4) + (long)local_c * 4) != param_1[0xc]))) {

local_c = local_c + 1;

}

if ((local_c == *param_1 + -1) &&

(*(int *)(*(long *)(param_1 + 4) + (long)local_c * 4) == param_1[0xc])) {

return local_c;

}

}

if (param_2 == 'b') {

local_c = param_1[0xb];

while ((local_c < *param_1 + -1 &&

(*(int *)(*(long *)(param_1 + 6) + (long)local_c * 4) != **(int **)(param_1 + 0xe)))) {

local_c = local_c + 1;

}

if ((local_c == *param_1 + -1) &&

(*(int *)(*(long *)(param_1 + 6) + (long)local_c * 4) == **(int **)(param_1 + 0xe))) {

return local_c;

}

}

return local_c;

}

  
  

/* pivot @ 001022ed */

  

ulong pivot(long param_1,char param_2,int param_3,int param_4)

  

{

uint uVar1;

int iVar2;

undefined8 *puVar3;

ulong uVar4;

int *piVar5;

if (param_2 == 'a') {

puVar3 = (undefined8 *)(param_1 + 0x10);

}

else {

puVar3 = (undefined8 *)(param_1 + 0x18);

}

if (((param_3 < param_4) || (param_2 != 'b')) || (*(int *)(param_1 + 0x48) < 1)) {

piVar5 = ft_init_int((param_4 - param_3) + 1);

piVar5 = copy_inttab((int *)*puVar3,piVar5,param_3,param_4);

piVar5 = bubble_sort(piVar5,(param_4 - param_3) + 1);

uVar1 = piVar5[(param_4 - param_3) / 2];

free(piVar5);

uVar4 = (ulong)uVar1;

}

else {

remove_pibon(param_1);

iVar2 = pibon_index(param_1,0x62);

uVar4 = pivot(param_1,0x62,*(undefined4 *)(param_1 + 0x2c),iVar2 + -1);

}

return uVar4;

}

  
  

/* pibon_a @ 001023f8 */

  

undefined4 pibon_a(int *param_1)

  

{

int local_c;

local_c = *param_1 + -1;

do {

if ((local_c <= param_1[10]) ||

(*(int *)(*(long *)(param_1 + 4) + (long)local_c * 4) !=

*(int *)(*(long *)(param_1 + 0x14) + (long)local_c * 4))) {

if (local_c == *param_1 + -1) {

return 0;

}

return *(undefined4 *)(*(long *)(param_1 + 4) + ((long)local_c + 1) * 4);

}

local_c = local_c + -1;

} while ((local_c != param_1[10]) ||

(*(int *)(*(long *)(param_1 + 4) + (long)local_c * 4) !=

*(int *)(*(long *)(param_1 + 0x14) + (long)local_c * 4)));

return *(undefined4 *)((long)param_1[10] * 4 + *(long *)(param_1 + 4));

}

  
  

/* index_int @ 001024e6 */

  

int index_int(long param_1,int param_2,int param_3,int param_4)

  

{

int local_c;

local_c = param_2;

while( true ) {

if (param_3 < local_c) {

return -1;

}

if (param_4 == *(int *)(param_1 + (long)local_c * 4)) break;

local_c = local_c + 1;

}

return local_c;

}

  
  

/* checkmore @ 00102532 */

  

int checkmore(long param_1,int param_2,int param_3,int param_4)

  

{

int local_c;

local_c = param_2;

while( true ) {

if (param_3 <= local_c) {

return -1;

}

if (param_4 < *(int *)(param_1 + (long)local_c * 4)) break;

local_c = local_c + 1;

}

return local_c;

}

  
  

/* add_pibon @ 0010257e */

  

void add_pibon(int *param_1,int param_2)

  

{

int iVar1;

int *piVar2;

int local_14;

local_14 = 1;

iVar1 = checkmore(*(undefined8 *)(param_1 + 6),param_1[0xb],*param_1 + -1,param_2);

if ((iVar1 == -1) && (piVar2 = ft_init_int(param_1[0x12] + 1), piVar2 != (int *)0x0)) {

*piVar2 = param_2;

for (; local_14 < param_1[0x12] + 1; local_14 = local_14 + 1) {

piVar2[local_14] = *(int *)(*(long *)(param_1 + 0xe) + (long)local_14 * 4 + -4);

}

free(*(void **)(param_1 + 0xe));

*(int **)(param_1 + 0xe) = piVar2;

param_1[0x12] = param_1[0x12] + 1;

}

return;

}

  
  

/* remove_pibon @ 00102669 */

  

void remove_pibon(long param_1)

  

{

int *piVar1;

piVar1 = ft_init_int(*(int *)(param_1 + 0x48) + -1);

piVar1 = copy_inttab(*(int **)(param_1 + 0x38),piVar1,1,*(int *)(param_1 + 0x48) + -1);

free(*(void **)(param_1 + 0x38));

*(int **)(param_1 + 0x38) = piVar1;

if (0 < *(int *)(param_1 + 0x48)) {

*(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;

}

return;

}

  
  

/* rotate_pibon @ 001026ee */

  

void rotate_pibon(t_ps *param_1)

  

{

if ((param_1->pibon_idx == 1) && (param_1->b[(long)param_1->total + -1] != param_1->min)) {

operation(param_1,"rrb\n");

reverse_operations(param_1,"rrb\n");

add_pibon(param_1,param_1->b[param_1->top_b]);

}

return;

}

  
  

/* push_back @ 0010277f */

  

undefined8 push_back(t_ps *param_1)

  

{

int iVar1;

undefined8 uVar2;

param_1->field_40 = 0;

param_1->pibon_idx = 0;

if (((param_1->size_b == 0) && (iVar1 = check_order_stack(param_1), iVar1 == 0)) &&

(param_1->top_a == 0)) {

return 0;

}

if ((param_1->size_b < 4) && (0 < param_1->size_b)) {

less_than_four_numbers_at_stack_b(param_1);

}

push_back_in_order(param_1);

if (param_1->size_b != 0) {

iVar1 = calculate_the_pibon_stack_b(param_1);

param_1->field_40 = iVar1;

sort_b_to_a(param_1,param_1->field_40);

if ((param_1->size_b < 4) && (0 < param_1->size_b)) {

less_than_four_numbers_at_stack_b(param_1);

iVar1 = check_order_stack(param_1);

if (iVar1 == 0) {

iVar1 = pibon_a(param_1);

param_1->bottom_a = iVar1;

return 0;

}

}

}

if (param_1->size_a != 0) {

iVar1 = pibon_a(param_1);

param_1->bottom_a = iVar1;

}

uVar2 = push_to(param_1);

return uVar2;

}

  
  

/* push_to @ 001028b2 */

  

undefined8 push_to(t_ps *param_1)

  

{

int iVar1;

do {

iVar1 = check_order_stack(param_1);

if ((iVar1 == 0) && (param_1->size_a == param_1->total)) {

return 0;

}

if (param_1->size_a != 0) {

iVar1 = pibon_a(param_1);

param_1->bottom_a = iVar1;

a_to_b(param_1);

while (0 < param_1->pibon_len) {

if (*param_1->pibon < param_1->a[param_1->top_a]) break;

remove_pibon(param_1);

}

}

push_back(param_1);

} while( true );

}

  
  

/* sort2_a @ 00102969 */

  

void sort2_a(t_ps *param_1)

  

{

if (param_1->a[param_1->top_a] < param_1->a[(long)param_1->top_a + 1]) {

operation(param_1,"sa\n");

swap_operations(param_1,"sa\n");

}

return;

}

  
  

/* sort3_a @ 001029de */

  

void sort3_a(t_ps *param_1)

  

{

LAB_00102b1c:

do {

while( true ) {

if ((param_1->a[param_1->top_a] < param_1->a[(long)param_1->top_a + 1]) &&

(param_1->a[(long)param_1->top_a + 1] < param_1->a[(long)param_1->top_a + 2])) {

return;

}

if (param_1->a[(long)param_1->top_a + 1] <= param_1->a[param_1->top_a]) break;

operation(param_1,"rra\n");

reverse_operations(param_1,"rra\n");

}

if (param_1->a[(long)param_1->top_a + 1] < param_1->a[param_1->top_a]) {

if (param_1->a[(long)param_1->top_a + 2] < param_1->a[param_1->top_a]) {

operation(param_1,"ra\n");

rotate_operations(param_1,"ra\n");

goto LAB_00102b1c;

}

}

operation(param_1,"sa\n");

swap_operations(param_1,"sa\n");

} while( true );

}

  
  

/* less_than_four_numbers_at_stack_a @ 00102ba3 */

  

void less_than_four_numbers_at_stack_a(long param_1)

  

{

if (*(int *)(param_1 + 0x20) == 3) {

sort3_a(param_1);

}

if (*(int *)(param_1 + 0x20) == 2) {

sort2_a(param_1);

}

return;

}

  
  

/* sort2_b @ 00102be2 */

  

void sort2_b(t_ps *param_1)

  

{

if (param_1->b[param_1->top_b] < param_1->b[(long)param_1->top_b + 1]) {

operation(param_1,"sb\n");

swap_operations(param_1,"sb\n");

}

operation(param_1,"pa\npa\n");

push_operations(param_1,"pa\n");

push_operations(param_1,"pa\n");

return;

}

  
  

/* sort3_b @ 00102c90 */

  

void sort3_b(t_ps *param_1)

  

{

do {

if (param_1->b[(long)param_1->top_b + 1] < param_1->b[param_1->top_b]) {

if (param_1->b[(long)param_1->top_b + 2] < param_1->b[(long)param_1->top_b + 1]) {

operation(param_1,"pa\npa\npa\n");

push_operations(param_1,"pa\n");

push_operations(param_1,"pa\n");

push_operations(param_1,"pa\n");

return;

}

}

if (param_1->b[param_1->top_b] < param_1->b[(long)param_1->top_b + 1]) {

operation(param_1,"rb\n");

rotate_operations(param_1,"rb\n");

}

else if (param_1->b[(long)param_1->top_b + 2] < param_1->b[param_1->top_b]) {

operation(param_1,"sb\n");

swap_operations(param_1,"sb\n");

}

else {

operation(param_1,"rrb\n");

reverse_operations(param_1,"rrb\n");

}

} while( true );

}

  
  

/* less_than_four_numbers_at_stack_b @ 00102e65 */

  

void less_than_four_numbers_at_stack_b(t_ps *param_1)

  

{

if (param_1->size_b == 3) {

sort3_b(param_1);

}

if (param_1->size_b == 2) {

sort2_b(param_1);

}

else {

operation(param_1,"pa\n");

push_operations(param_1,"pa\n");

}

return;

}

  
  

/* last_check @ 00102ecc */

  

void last_check(t_ps *param_1)

  

{

int iVar1;

if (param_1->size_a == 2) {

iVar1 = param_1->a[(long)param_1->total + -1];

if (param_1->a[(long)param_1->total + -2] <= param_1->a[(long)param_1->total + -1]) {

iVar1 = param_1->a[(long)param_1->total + -2];

}

*param_1->pibon = iVar1;

if (param_1->a[(long)param_1->total + -2] < param_1->a[(long)param_1->total + -1]) {

operation(param_1,"pb\n");

push_operations(param_1,"pb\n");

}

else {

operation(param_1,"ra\npb\n");

rotate_operations(param_1,"ra\n");

push_operations(param_1,"pb\n");

}

}

return;

}

  
  

/* sort_from_a_to_b_first_push @ 00102fd3 */

  

void sort_from_a_to_b_first_push(t_ps *param_1,int param_2)

  

{

int *piVar1;

int iVar2;

piVar1 = param_1->a;

iVar2 = top(param_1,'a');

if (piVar1[iVar2] == param_1->min) {

operation(param_1,"pb\nrb\n");

push_operations(param_1,"pb\n");

rotate_operations(param_1,"rb\n");

}

else {

piVar1 = param_1->a;

iVar2 = top(param_1,'a');

if (piVar1[iVar2] < param_2) {

operation(param_1,"pb\n");

push_operations(param_1,"pb\n");

}

else {

piVar1 = param_1->a;

iVar2 = top(param_1,'a');

if (param_2 == piVar1[iVar2]) {

operation(param_1,"pb\nrb\n");

push_operations(param_1,"pb\n");

rotate_operations(param_1,"rb\n");

param_1->pibon_idx = 1;

}

else {

operation(param_1,"ra\n");

rotate_operations(param_1,"ra\n");

}

}

}

return;

}

  
  

/* sort_first_push @ 00103141 */

  

void sort_first_push(t_ps *param_1,int param_2)

  

{

int iVar1;

int iVar2;

while( true ) {

iVar2 = param_1->total;

iVar1 = top(param_1,'a');

iVar2 = checkless(param_1->a,iVar1,iVar2,param_2);

if (iVar2 == -1) break;

sort_from_a_to_b_first_push(param_1,param_2);

}

if (param_1->pibon_idx == 1) {

operation(param_1,"rrb\n");

reverse_operations(param_1,"rrb\n");

}

if (param_2 == param_1->b[(long)param_1->total + -1]) {

operation(param_1,"rrb\nsb\nrb\n");

reverse_operations(param_1,"rrb\n");

swap_operations(param_1,"sb\n");

rotate_operations(param_1,"rb\n");

}

add_pibon(param_1,param_2);

return;

}

  
  

/* sort_random @ 00103252 */

  

void sort_random(t_ps *param_1)

  

{

int *piVar1;

int iVar2;

undefined4 uVar3;

int iVar4;

while ((1 < param_1->size_a && (iVar4 = check_order_stack(param_1), iVar4 == -1))) {

param_1->pibon_idx = 0;

iVar4 = param_1->total;

iVar2 = top(param_1,'a');

uVar3 = pivot(param_1,0x61,iVar2,iVar4 + -1);

sort_first_push(param_1,uVar3);

last_check(param_1);

}

while ((0 < param_1->pibon_len && (param_1->a[param_1->top_a] <= *param_1->pibon))) {

remove_pibon(param_1);

}

piVar1 = param_1->a;

iVar4 = top(param_1,'a');

param_1->bottom_a = piVar1[iVar4];

while ((iVar4 = check_order_stack(param_1), iVar4 != 0 || (param_1->size_a != param_1->total))) {

push_back(param_1);

}

return;

}

  
  

/* top @ 0010337b */

  

int top(t_ps *ps,char stack)

  

{

int iVar1;

if (stack == 'a') {

iVar1 = ps->total - ps->size_a;

}

else if (stack == 'b') {

iVar1 = ps->total - ps->size_b;

}

else {

iVar1 = 0;

}

return iVar1;

}

  
  

/* copy_inttab @ 001033c1 */

  

int * copy_inttab(int *src,int *dst,int start,int end)

  

{

int local_c;

for (local_c = 0; local_c < (end - start) + 1; local_c = local_c + 1) {

dst[local_c] = src[local_c + start];

}

return dst;

}

  
  

/* check_order_stack @ 00103426 */

  

int check_order_stack(t_ps *ps)

  

{

int local_c;

local_c = ps->top_a;

while( true ) {

if (ps->total <= local_c) {

return 0;

}

if (ps->a[local_c] != ps->sorted[local_c]) break;

local_c = local_c + 1;

}

return -1;

}

  
  

/* check_top_both_stacks @ 00103489 */

  

void check_top_both_stacks(t_ps *param_1)

  

{

if (param_1->a[(long)param_1->top_a + 1] < param_1->a[param_1->top_a]) {

operation(param_1,"sa\n");

swap_operations(param_1,"sa\n");

}

if (param_1->b[param_1->top_b] < param_1->b[(long)param_1->top_b + 1]) {

operation(param_1,"sb\n");

swap_operations(param_1,"sb\n");

}

return;

}

  
  

/* ft_free @ 0010355c */

  

void ft_free(t_ps *ps)

  

{

free(ps->a);

free(ps->b);

free(ps->sorted);

free(ps->pibon);

free(ps->ops);

return;

}

  
  

/* push_back_in_order @ 001035bb */

  

void push_back_in_order(t_ps *param_1)

  

{

while( true ) {

if (param_1->size_b == 0) {

return;

}

if (param_1->b[param_1->top_b] != param_1->sorted[(long)param_1->top_a + -1]) break;

if ((0 < param_1->pibon_len) && (param_1->b[param_1->top_b] == *param_1->pibon)) {

remove_pibon(param_1);

}

operation(param_1,"pa\n");

push_operations(param_1,"pa\n");

param_1->bottom_a = param_1->a[param_1->top_a];

}

return;

}

  
  

/* calculate_the_pibon_stack_b @ 001036a0 */

  

int calculate_the_pibon_stack_b(int *param_1)

  

{

int iVar1;

int local_c;

if (param_1[0x12] < 2) {

local_c = pivot(param_1,0x62,param_1[0xb],*param_1 + -1);

add_pibon(param_1,local_c);

}

else {

iVar1 = pibon_index(param_1,0x62);

local_c = pivot(param_1,0x62,param_1[0xb],iVar1 + -1);

if (local_c < **(int **)(param_1 + 0xe)) {

local_c = **(int **)(param_1 + 0xe);

remove_pibon(param_1);

}

}

return local_c;

}

  
  

/* b_to_a @ 0010374b */

  

void b_to_a(t_ps *param_1,int param_2,int *param_3)

  

{

int iVar1;

if (param_1->b[param_1->top_b] < param_2) {

if (1 < param_1->size_b) {

operation(param_1,"rb\n");

rotate_operations(param_1,"rb\n");

*param_3 = *param_3 + 1;

}

}

else {

operation(param_1,"pa\n");

push_operations(param_1,"pa\n");

if (param_2 == param_1->a[param_1->top_a]) {

operation(param_1,"ra\n");

rotate_operations(param_1,"ra\n");

param_1->pibon_idx = 1;

}

if (param_1->a[(long)param_1->top_a + 1] < param_1->a[param_1->top_a]) {

operation(param_1,"sa\n");

swap_operations(param_1,"sa\n");

}

iVar1 = pibon_a(param_1);

param_1->bottom_a = iVar1;

}

return;

}

  
  

/* rotate_or_reverse @ 001038b4 */

  

void rotate_or_reverse(t_ps *param_1,int param_2)

  

{

int local_14;

local_14 = param_2;

if (param_1->size_b / 2 < param_2) {

operation(param_1,"rb\n");

rotate_operations(param_1,"rb\n");

}

else {

for (; local_14 != 0; local_14 = local_14 + -1) {

operation(param_1,"rrb\n");

reverse_operations(param_1,"rrb\n");

}

}

return;

}

  
  

/* sort_b_to_a @ 00103933 */

  

void sort_b_to_a(t_ps *param_1,undefined4 param_2)

  

{

int iVar1;

long in_FS_OFFSET;

undefined4 local_14;

long local_10;

local_10 = *(long *)(in_FS_OFFSET + 0x28);

local_14 = 0;

while ((param_1->b[param_1->top_b] != *param_1->pibon && (0 < param_1->size_b))) {

b_to_a(param_1,param_2,&local_14);

}

rotate_or_reverse(param_1,local_14);

if (param_1->pibon_idx == 1) {

operation(param_1,"rra\n");

reverse_operations(param_1,"rra\n");

iVar1 = check_order_stack(param_1);

if (iVar1 != 0) {

operation(param_1,"pb\n");

push_operations(param_1,"pb\n");

add_pibon(param_1,param_2);

}

if (param_1->a[(long)param_1->top_a + 1] < param_1->a[param_1->top_a]) {

operation(param_1,"sa\n");

swap_operations(param_1,"sa\n");

}

iVar1 = pibon_a(param_1);

param_1->bottom_a = iVar1;

}

if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {

/* WARNING: Subroutine does not return */

__stack_chk_fail();

}

return;

}

  
  

/* checkless @ 00103abe */

  

int checkless(long param_1,int param_2,int param_3,int param_4)

  

{

int local_c;

local_c = param_2;

while( true ) {

if (param_3 <= local_c) {

return -1;

}

if (*(int *)(param_1 + (long)local_c * 4) <= param_4) break;

local_c = local_c + 1;

}

return local_c;

}

  
  

/* less_or_equal_than_pibon @ 00103b0a */

  

void less_or_equal_than_pibon(t_ps *param_1,int param_2)

  

{

operation(param_1,"pb\n");

push_operations(param_1,"pb\n");

if (param_1->b[param_1->top_b] == param_1->min) {

operation(param_1,"rb\n");

rotate_operations(param_1,"rb\n");

}

else if (param_2 == param_1->b[param_1->top_b]) {

operation(param_1,"rb\n");

rotate_operations(param_1,"rb\n");

param_1->pibon_idx = 1;

}

if (param_1->b[param_1->top_b] < param_1->b[(long)param_1->top_b + 1]) {

operation(param_1,"sb\n");

swap_operations(param_1,"sb\n");

}

return;

}

  
  

/* a_to_b @ 00103c41 */

  

void a_to_b(t_ps *param_1)

  

{

undefined4 uVar1;

int iVar2;

undefined4 uVar3;

int iVar4;

uVar1 = pibon_index(param_1,0x61);

iVar2 = top(param_1,'a');

uVar1 = pivot(param_1,0x61,iVar2,uVar1);

while( true ) {

iVar2 = pibon_index(param_1,0x61);

if (iVar2 - param_1->top_a < 2) break;

iVar2 = check_order_stack(param_1);

if (iVar2 != -1) break;

param_1->pibon_idx = 0;

uVar3 = sort_a_to_b(param_1,uVar1,0);

rotate_pibon_min(param_1,uVar1,uVar3);

if (param_1->size_a != 0) {

iVar2 = pibon_index(param_1,0x61);

iVar4 = top(param_1,'a');

if (1 < iVar2 - iVar4) {

operation(param_1,"pb\n");

push_operations(param_1,"pb\n");

add_pibon(param_1,uVar1);

}

}

}

if (param_1->size_a != 0) {

iVar2 = pibon_a(param_1);

param_1->bottom_a = iVar2;

}

return;

}

  
  

/* sort_a_to_b @ 00103d96 */

  

int sort_a_to_b(t_ps *param_1,int param_2,int param_3)

  

{

int *piVar1;

int iVar2;

int local_28;

iVar2 = pibon_a(param_1);

param_1->bottom_a = iVar2;

local_28 = param_3;

LAB_00103e57:

do {

if ((param_1->size_a == 0) || (param_1->a[param_1->top_a] == param_1->bottom_a)) {

rotate_pibon(param_1);

if (param_1->size_a != 0) {

iVar2 = pibon_a(param_1);

param_1->bottom_a = iVar2;

}

check_top_both_stacks(param_1);

return local_28;

}

if ((param_1->top_a != 0) && (param_1->a[param_1->top_a] <= param_2)) {

piVar1 = param_1->sorted;

iVar2 = pibon_index(param_1,0x61);

if (param_2 != piVar1[(long)iVar2 + -1]) {

less_or_equal_than_pibon(param_1,param_2);

goto LAB_00103e57;

}

}

operation(param_1,"ra\n");

rotate_operations(param_1,"ra\n");

local_28 = local_28 + 1;

} while( true );

}

  
  

/* rotate_pibon_min @ 00103ecd */

  

void rotate_pibon_min(t_ps *param_1,int param_2,int param_3)

  

{

int iVar1;

int iVar2;

int local_28;

rotate_pibon(param_1);

if ((param_2 != param_1->b[(long)param_1->total + -1]) &&

(param_1->b[(long)param_1->total + -1] != param_1->min)) {

operation(param_1,"rrb\nsb\nrb\n");

reverse_operations(param_1,"rrb\n");

swap_operations(param_1,"sb\n");

rotate_operations(param_1,"rb\n");

add_pibon(param_1,param_1->b[param_1->top_b]);

}

param_1->pibon_idx = 0;

iVar2 = index_int(param_1->a,param_1->top_a,param_1->total + -1,param_1->max);

iVar2 = pivot(param_1,0x61,iVar2 + 1,param_1->total + -1);

local_28 = param_3;

while( true ) {

iVar1 = local_28 + -1;

if (local_28 == 0) break;

operation(param_1,"rra\n");

reverse_operations(param_1,"rra\n");

if (param_1->a[param_1->top_a] <= iVar2) {

less_or_equal_than_pibon(param_1,iVar2);

}

check_top_both_stacks(param_1);

local_28 = iVar1;

if (iVar2 == param_1->b[(long)param_1->total + -1]) {

rotate_pibon(param_1);

}

}

return;

}

  
  

/* debug @ 001040b2 */

  

int debug(t_ps *ps,char **argv,int argc)

  

{

int iVar1;

if ((argc < 3) || (iVar1 = ft_strcmp(argv[1],"-d"), iVar1 != 0)) {

ps->debug = 0;

return 1;

}

ps->debug = 1;

return 2;

}

  
  

/* column_a @ 0010410d */

  

int column_a(t_ps *ps,int i)

  

{

int iVar1;

int local_10;

iVar1 = nblen(ps->a[i]);

if ((ps->bottom_a == ps->a[i]) && (ps->top_a <= i)) {

ft_putstr("| * ");

}

else {

ft_putstr("| ");

}

ft_putnbr(ps->a[i]);

local_10 = 0xb - iVar1;

while (local_10 != 0) {

ft_putchar(' ');

local_10 = local_10 + -1;

}

return i;

}

  
  

/* is_pibon @ 001041d0 */

  

int is_pibon(int *pibon,int len,int value)

  

{

int local_c;

local_c = 0;

while( true ) {

if (len <= local_c) {

return -1;

}

if (value == pibon[local_c]) break;

local_c = local_c + 1;

}

return 1;

}

  
  

/* column_b @ 0010421c */

  

int column_b(t_ps *ps,int i)

  

{

int iVar1;

int iVar2;

int local_10;

iVar1 = nblen(ps->b[i]);

iVar2 = is_pibon(ps->pibon,ps->pibon_len,ps->b[i]);

if ((iVar2 == 1) && (ps->top_b <= i)) {

ft_putstr("| * ");

}

else {

ft_putstr("| ");

}

ft_putnbr(ps->b[i]);

local_10 = 0xb - iVar1;

while (local_10 != 0) {

ft_putchar(' ');

local_10 = local_10 + -1;

}

ft_putendl("|");

return i;

}

  
  

/* visual @ 001042fe */

  

void visual(t_ps *ps)

  

{

int i;

int local_c;

local_c = -1;

if (ps->debug == 1) {

ft_putendl(" __________________ __________________ ");

ft_putendl("| | |");

ft_putendl("| a | b |");

ft_putendl("|__________________|__________________|");

ft_putendl("| | |");

while (local_c + 1 < ps->total) {

i = column_a(ps,local_c + 1);

local_c = column_b(ps,i);

}

ft_putendl("|__________________|__________________|\n");

}

return;

}

  
  

/* ft_atoi @ 001043a5 */

  

int ft_atoi(char *s)

  

{

int local_18;

int local_14;

char *local_10;

local_14 = 1;

local_18 = 0;

for (local_10 = s; (('\b' < *local_10 && (*local_10 < '\x0e')) || (*local_10 == ' '));

local_10 = local_10 + 1) {

}

if (*local_10 == '-') {

local_14 = -1;

local_10 = local_10 + 1;

}

else if (*local_10 == '+') {

local_10 = local_10 + 1;

}

for (; ('/' < *local_10 && (*local_10 < ':')); local_10 = local_10 + 1) {

local_18 = *local_10 + -0x30 + local_18 * 10;

}

return local_18 * local_14;

}

  
  

/* ft_atol @ 0010445a */

  

long ft_atol(char *s)

  

{

int local_1c;

long local_18;

char *local_10;

local_1c = 1;

local_18 = 0;

for (local_10 = s; (('\b' < *local_10 && (*local_10 < '\x0e')) || (*local_10 == ' '));

local_10 = local_10 + 1) {

}

if (*local_10 == '-') {

local_1c = -1;

local_10 = local_10 + 1;

}

else if (*local_10 == '+') {

local_10 = local_10 + 1;

}

for (; ('/' < *local_10 && (*local_10 < ':')); local_10 = local_10 + 1) {

local_18 = (long)(*local_10 + -0x30) + local_18 * 10;

}

return local_1c * local_18;

}

  
  

/* ft_isdigit @ 0010451d */

  

int ft_isdigit(int c)

  

{

int iVar1;

if ((c < 0x30) || (0x39 < c)) {

iVar1 = 0;

}

else {

iVar1 = 1;

}

return iVar1;

}

  
  

/* ft_putchar @ 0010453e */

  

void ft_putchar(char c)

  

{

char local_c [4];

local_c[0] = c;

write(1,local_c,1);

return;

}

  
  

/* ft_putnbr @ 00104564 */

  

void ft_putnbr(int n)

  

{

ft_putnbr_fd(n,1);

return;

}

  
  

/* ft_putstr @ 00104581 */

  

void ft_putstr(char *s)

  

{

size_t __n;

if (s != (char *)0x0) {

__n = ft_strlen(s);

write(1,s,__n);

}

return;

}

  
  

/* ft_putendl @ 001045b7 */

  

void ft_putendl(char *s)

  

{

if (s != (char *)0x0) {

ft_putendl_fd(s,1);

}

return;

}

  
  

/* ft_strcat @ 001045de */

  

long ft_strcat(long param_1,long param_2)

  

{

uint local_10;

uint local_c;

local_c = 0;

for (local_10 = 0; *(char *)(param_1 + (ulong)local_10) != '\0'; local_10 = local_10 + 1) {

}

for (; *(char *)(param_2 + (ulong)local_c) != '\0'; local_c = local_c + 1) {

*(undefined1 *)(param_1 + (ulong)local_10) = *(undefined1 *)(param_2 + (ulong)local_c);

local_10 = local_10 + 1;

}

*(undefined1 *)(param_1 + (ulong)local_10) = 0;

return param_1;

}

  
  

/* ft_strcmp @ 00104656 */

  

int ft_strcmp(char *s1,char *s2)

  

{

byte *local_18;

byte *local_10;

local_10 = (byte *)s1;

for (local_18 = (byte *)s2; ((*local_10 == *local_18 && (*local_10 != 0)) && (*local_18 != 0));

local_18 = local_18 + 1) {

local_10 = local_10 + 1;

}

return (uint)*local_10 - (uint)*local_18;

}

  
  

/* ft_strdel @ 001046b0 */

  

void ft_strdel(char **s)

  

{

if (s != (char **)0x0) {

free(*s);

*s = (char *)0x0;

}

return;

}

  
  

/* ft_strjoin @ 001046e0 */

  

char * ft_strjoin(char *param_1,char *param_2)

  

{

long lVar1;

long lVar2;

char *dst;

if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {

dst = (char *)0x0;

}

else {

lVar1 = ft_strlen(param_1);

lVar2 = ft_strlen(param_2);

dst = ft_strnew(lVar2 + lVar1);

if (dst == (char *)0x0) {

dst = (char *)0x0;

}

else {

ft_strcpy(dst,param_1);

ft_strcat(dst,param_2);

}

}

return dst;

}

  
  

/* ft_strlen @ 0010476f */

  

long ft_strlen(char *s)

  

{

ulong uVar1;

uint local_c;

local_c = 0;

if (s == (char *)0x0) {

uVar1 = 0;

}

else {

for (; s[local_c] != '\0'; local_c = local_c + 1) {

}

uVar1 = (ulong)local_c;

}

return uVar1;

}

  
  

/* ft_strncpy @ 001047a8 */

  

char * ft_strncpy(char *dst,char *src,long n)

  

{

ulong local_10;

for (local_10 = 0; (src[local_10] != '\0' && (local_10 < (ulong)n)); local_10 = local_10 + 1) {

dst[local_10] = src[local_10];

}

for (; local_10 < (ulong)n; local_10 = local_10 + 1) {

dst[local_10] = '\0';

}

return dst;

}

  
  

/* ft_strnew @ 00104823 */

  

char * ft_strnew(long n)

  

{

char *pcVar1;

long local_20;

pcVar1 = malloc(n + 1);

if (pcVar1 == (char *)0x0) {

pcVar1 = (char *)0x0;

}

else {

for (local_20 = n + 1; local_20 != 0; local_20 = local_20 + -1) {

pcVar1[local_20 + -1] = '\0';

}

}

return pcVar1;

}

  
  

/* ft_free_strsplit @ 0010487d */

  

undefined8 ft_free_strsplit(void *param_1)

  

{

free(param_1);

return 0;

}

  
  

/* ft_strsplit @ 0010489c */

  

char ** ft_strsplit(char *s,char c)

  

{

int iVar1;

char **ppcVar2;

char *pcVar3;

char *local_30;

uint local_28;

uint local_24;

local_28 = 0;

if (s != (char *)0x0) {

iVar1 = ft_count_words(s,(int)c);

ppcVar2 = malloc((long)(iVar1 + 1) << 3);

local_30 = s;

if (ppcVar2 != (char **)0x0) {

while( true ) {

while( true ) {

if (*local_30 == '\0') {

ppcVar2[local_28] = (char *)0x0;

return ppcVar2;

}

if (c != *local_30) break;

local_30 = local_30 + 1;

}

local_24 = 0;

iVar1 = ft_word_len(local_30,(int)c);

pcVar3 = malloc((long)iVar1 + 1);

ppcVar2[local_28] = pcVar3;

if (ppcVar2[local_28] == (char *)0x0) break;

while ((c != *local_30 && (*local_30 != '\0'))) {

ppcVar2[local_28][local_24] = *local_30;

local_30 = local_30 + 1;

local_24 = local_24 + 1;

}

ppcVar2[local_28][local_24] = '\0';

local_28 = local_28 + 1;

}

ppcVar2 = (char **)ft_free_strsplit(ppcVar2);

return ppcVar2;

}

}

return (char **)0x0;

}

  
  

/* ft_strstr @ 00104a0d */

  

long ft_strstr(long param_1,char *param_2)

  

{

long lVar1;

uint local_10;

uint local_c;

local_10 = 0;

lVar1 = ft_strlen(param_2);

if (lVar1 != 0) {

for (; *(char *)(param_1 + (ulong)local_10) != '\0'; local_10 = local_10 + 1) {

for (local_c = 0; param_2[local_c] == *(char *)(param_1 + (ulong)(local_c + local_10));

local_c = local_c + 1) {

if (param_2[local_c + 1] == '\0') {

return param_1 + (ulong)local_10;

}

}

}

param_1 = 0;

}

return param_1;

}

  
  

/* ft_count_words @ 00104aab */

  

long ft_count_words(char *param_1,char param_2)

  

{

long local_18;

long local_10;

local_18 = 0;

local_10 = 0;

if (param_2 != *param_1) {

local_18 = 1;

}

for (; param_1[local_10] != '\0'; local_10 = local_10 + 1) {

if (((param_2 == param_1[local_10]) && (param_2 != param_1[local_10 + 1])) &&

(param_1[local_10 + 1] != '\0')) {

local_18 = local_18 + 1;

}

}

return local_18;

}

  
  

/* ft_word_len @ 00104b3d */

  

long ft_word_len(char *param_1,char param_2)

  

{

char *local_20;

long local_10;

local_10 = 0;

for (local_20 = param_1; (*local_20 != '\0' && (param_2 != *local_20)); local_20 = local_20 + 1) {

local_10 = local_10 + 1;

}

return local_10;

}

  
  

/* save_remainder_into_list @ 00104b7b */

  

int save_remainder_into_list(t_gnl **list,int fd,char *buf,int nl)

  

{

char *pcVar1;

s_gnl *psVar2;

t_gnl *local_18;

for (local_18 = *list;

((local_18 != (t_gnl *)0x0 && (local_18->next != (s_gnl *)0x0)) && (fd != local_18->fd));

local_18 = local_18->next) {

}

if (((local_18 == (t_gnl *)0x0) || (fd != local_18->fd)) || (buf[(long)nl + 1] == '\0')) {

if (buf[(long)nl + 1] != '\0') {

psVar2 = malloc(0x18);

if (psVar2 == (s_gnl *)0x0) {

return -1;

}

pcVar1 = ft_strdup(buf + (long)nl + 1);

psVar2->rest = pcVar1;

psVar2->fd = fd;

psVar2->next = (s_gnl *)0x0;

if (*list == (t_gnl *)0x0) {

*list = psVar2;

}

else {

local_18->next = psVar2;

}

}

}

else {

pcVar1 = ft_strdup(buf + (long)nl + 1);

local_18->rest = pcVar1;

}

free(buf);

return 1;

}

  
  

/* line_memory_allocation @ 00104cc5 */

  

int line_memory_allocation(char **line,int extra)

  

{

char *pcVar1;

char *pcVar2;

long local_18;

local_18 = 0;

if (*line == (char *)0x0) {

pcVar1 = ft_strnew((long)extra);

*line = pcVar1;

if (*line == (char *)0x0) {

return -1;

}

}

else {

pcVar1 = ft_strdup(*line);

if (pcVar1 == (char *)0x0) {

return -1;

}

free(*line);

local_18 = ft_strlen(pcVar1);

pcVar2 = ft_strnew(local_18 + extra);

*line = pcVar2;

if (*line == (char *)0x0) {

return -1;

}

ft_strcpy(*line,pcVar1);

free(pcVar1);

}

return (int)local_18;

}

  
  

/* put_buffer_into_line @ 00104db3 */

  

int put_buffer_into_line(char *buf,char **line,t_gnl **list,int fd)

  

{

int iVar1;

int local_10;

for (local_10 = 0; ((buf[local_10] != '\n' && (buf[local_10] != -1)) && (buf[local_10] != '\0'));

local_10 = local_10 + 1) {

}

iVar1 = line_memory_allocation(line,(uint)(buf[local_10] == '\n') + local_10);

if (iVar1 == -1) {

iVar1 = -1;

}

else {

ft_strncpy(*line + iVar1,buf,(long)(int)(local_10 + (uint)(buf[local_10] == '\n')));

if (buf[local_10] == '\n') {

iVar1 = save_remainder_into_list(list,fd,buf,local_10);

}

else if (buf[local_10] == '\0') {

iVar1 = read_from_fd(buf,line,list,fd);

}

else {

free(buf);

iVar1 = 1;

}

}

return iVar1;

}

  
  

/* read_from_fd @ 00104efb */

  

int read_from_fd(char *old,char **line,t_gnl **list,int fd)

  

{

int iVar1;

char *buf;

ssize_t sVar2;

long lVar3;

if (old != (char *)0x0) {

free(old);

}

buf = malloc(0x3e9);

if (buf == (char *)0x0) {

iVar1 = -1;

}

else {

sVar2 = read(fd,buf,1000);

iVar1 = (int)sVar2;

if ((iVar1 < 1) || (*buf == '\0')) {

free(buf);

if (iVar1 < 0) {

iVar1 = -1;

}

else {

if (((iVar1 == 0) && (*line != (char *)0x0)) && (lVar3 = ft_strlen(*line), lVar3 != 0)) {

return 1;

}

iVar1 = 0;

}

}

else {

buf[iVar1] = '\0';

iVar1 = put_buffer_into_line(buf,line,list,fd);

}

}

return iVar1;

}

  
  

/* get_next_line @ 00104fe4 */

  

int get_next_line(int fd,char **line)

  

{

long lVar1;

int iVar2;

char *buf;

long in_FS_OFFSET;

int *local_28;

int *local_20;

lVar1 = *(long *)(in_FS_OFFSET + 0x28);

if ((fd < 0) || (line == (char **)0x0)) {

iVar2 = -1;

}

else {

*line = (char *)0x0;

local_28 = list_3864;

for (local_20 = list_3864; (local_20 != (int *)0x0 && (fd != *local_20));

local_20 = *(int **)(local_20 + 4)) {

local_28 = local_20;

}

if (local_20 == (int *)0x0) {

iVar2 = read_from_fd((char *)0x0,line,(t_gnl **)&list_3864,fd);

}

else {

if (local_28 == local_20) {

list_3864 = *(int **)(list_3864 + 4);

}

buf = ft_strdup(*(char **)(local_20 + 2));

*(undefined8 *)(local_28 + 4) = *(undefined8 *)(local_20 + 4);

free(*(void **)(local_20 + 2));

free(local_20);

iVar2 = put_buffer_into_line(buf,line,(t_gnl **)&list_3864,fd);

}

}

if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {

/* WARNING: Subroutine does not return */

__stack_chk_fail();

}

return iVar2;

}

  
  

/* ft_init_int @ 00105121 */

  

int * ft_init_int(int n)

  

{

int *piVar1;

int local_14;

local_14 = 0;

if (n < 1) {

piVar1 = (int *)0x0;

}

else {

piVar1 = malloc((long)n << 2);

if (piVar1 == (int *)0x0) {

piVar1 = (int *)0x0;

}

else {

for (; local_14 < n; local_14 = local_14 + 1) {

piVar1[local_14] = 0;

}

}

}

return piVar1;

}

  
  

/* ft_tabdel @ 0010518f */

  

void ft_tabdel(char **tab)

  

{

int local_c;

local_c = 0;

if (tab != (char **)0x0) {

for (; tab[local_c] != (char *)0x0; local_c = local_c + 1) {

free(tab[local_c]);

}

free(tab);

}

return;

}

  
  

/* ft_putendl_fd @ 001051f9 */

  

void ft_putendl_fd(char *s,int fd)

  

{

if (s != (char *)0x0) {

ft_putstr_fd(s,fd);

write(fd,"\n",1);

}

return;

}

  
  

/* ft_putnbr_fd @ 00105239 */

  

void ft_putnbr_fd(int n,int fd)

  

{

long local_10;

local_10 = (long)n;

if (local_10 < 0) {

ft_putchar_fd('-',fd);

local_10 = -local_10;

}

if (9 < local_10) {

ft_putnbr_fd((int)(local_10 / 10),fd);

}

ft_putchar_fd((char)local_10 + (char)(local_10 / 10) * -10 + '0',fd);

return;

}

  
  

/* ft_putstr_fd @ 001052f0 */

  

void ft_putstr_fd(char *s,int fd)

  

{

size_t __n;

if (s != (char *)0x0) {

__n = ft_strlen(s);

write(fd,s,__n);

}

return;

}

  
  

/* ft_strcpy @ 00105329 */

  

char * ft_strcpy(char *dst,char *src)

  

{

uint local_c;

for (local_c = 0; src[local_c] != '\0'; local_c = local_c + 1) {

dst[local_c] = src[local_c];

}

dst[local_c] = '\0';

return dst;

}

  
  

/* ft_strdup @ 0010537f */

  

char * ft_strdup(char *s)

  

{

long lVar1;

char *pcVar2;

lVar1 = ft_strlen(s);

pcVar2 = malloc(lVar1 + 1);

if (pcVar2 == (char *)0x0) {

pcVar2 = (char *)0x0;

}

else {

pcVar2 = ft_strcpy(pcVar2,s);

}

return pcVar2;

}

  
  

/* ft_putchar_fd @ 001053ca */

  

void ft_putchar_fd(char c,int fd)

  

{

char local_c [4];

local_c[0] = c;

write(fd,local_c,1);

return;

}

  
  

/* __libc_csu_init @ 00105400 */

  

void __libc_csu_init(EVP_PKEY_CTX *param_1,undefined8 param_2,undefined8 param_3)

  

{

long lVar1;

_init(param_1);

lVar1 = 0;

do {

(*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)param_1 & 0xffffffff,param_2,param_3)

;

lVar1 = lVar1 + 1;

} while (lVar1 != 1);

return;

}

  
  

/* __libc_csu_fini @ 00105470 */

  

void __libc_csu_fini(void)

  

{

return;

}

  
  

/* _fini @ 00105474 */

  

void _fini(void)

{
return;
}
