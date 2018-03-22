@x
@!bad:integer; {is some ``constant'' wrong?}
@y
@!bad:integer; {is some ``constant'' wrong?}
@{ Pseudozmienne @t@>@}
{ Nowe }
@! mode:integer;
@! head:integer;
@! tail:integer;
@! prev_graf:integer;
@! aux:integer;
@! prev_depth:integer;
@! space_factor:integer;
@! clang:integer;
@! incompleat_noad:integer;
@! mode_line:integer;
@! top_mark:integer;
@! first_mark:integer;
@! bot_mark:integer;
@! split_first_mark:integer;
@! split_bot_mark:integer;
@! non_char:integer;
@! stop_flag:integer;
@! kern_flag:integer;
@! default_rule_thickness:integer;
@! big_op_spacing1:integer;
@! big_op_spacing2:integer;
@! big_op_spacing3:integer;
@! big_op_spacing4:integer;
@! big_op_spacing5:integer;
{ Stare }
@!active_height:array[1..6] of scaled;
@!trie_root:trie_pointer;
@!act_width:scaled;
@!cur_height:scaled;
@!page_goal:scaled;
@!page_total:scaled;
@!page_shrink:scaled;
@!page_depth:scaled;
@!cur_file:alpha_file;
@!state:quarterword;
@!iindex:quarterword;
@!token_type:quarterword;
@!contrib_tail:pointer;
@!start:halfword;
@!loc:halfword;
@!limit:halfword;
@!name:halfword;
@!param_start:halfword;
@!par_shape_ptr:halfword;
@!output_routine:halfword;
@!every_par:halfword;
@!every_math:halfword;
@!every_display:halfword;
@!every_hbox:halfword;
@!every_vbox:halfword;
@!every_job:halfword;
@!every_cr:halfword;
@!err_help:halfword;
@!cur_font:halfword;
@!line_skip:integer; {glue_pars}
@!baseline_skip:integer;
@!par_skip:integer;
@!above_display_skip:integer;
@!below_display_skip:integer;
@!above_display_short_skip:integer;
@!below_display_short_skip:integer;
@!left_skip:integer;
@!right_skip:integer;
@!top_skip:integer;
@!split_top_skip:integer;
@!tab_skip:integer;
@!space_skip:integer;
@!xspace_skip:integer;
@!par_fill_skip:integer;
@!thin_mu_skip:integer;
@!med_mu_skip:integer;
@!thick_mu_skip:integer;
@!pretolerance:integer;{int_pars}
@!tolerance:integer;
@!line_penalty:integer;
@!hyphen_penalty:integer;
@!ex_hyphen_penalty:integer;
@!club_penalty:integer;
@!widow_penalty:integer;
@!display_widow_penalty:integer;
@!broken_penalty:integer;
@!bin_op_penalty:integer;
@!rel_penalty:integer;
@!pre_display_penalty:integer;
@!post_display_penalty:integer;
@!inter_line_penalty:integer;
@!double_hyphen_demerits:integer;
@!final_hyphen_demerits:integer;
@!adj_demerits:integer;
@!mag:integer;
@!delimiter_factor:integer;
@!looseness:integer;
@!time:integer;
@!day:integer;
@!month:integer;
@!year:integer;
@!show_box_breadth:integer;
@!show_box_depth:integer;
@!hbadness:integer;
@!vbadness:integer;
@!pausing:integer;
@!tracing_online:integer;
@!tracing_macros:integer;
@!tracing_stats:integer;
@!tracing_paragraphs:integer;
@!tracing_pages:integer;
@!tracing_output:integer;
@!tracing_lost_chars:integer;
@!tracing_commands:integer;
@!tracing_restores:integer;
@!uc_hyph:integer;
@!output_penalty:integer;
@!max_dead_cycles:integer;
@!hang_after:integer;
@!floating_penalty:integer;
@!global_defs:integer;
@!cur_fam:integer;
@!escape_char:integer;
@!default_hyphen_char:integer;
@!default_skew_char:integer;
@!end_line_char:integer;
@!new_line_char:integer;
@!language:integer;
@!left_hyphen_min:integer;
@!right_hyphen_min:integer;
@!holding_inserts:integer;
@!error_context_lines:integer;
@!par_indent:integer;{dimen_pars}
@!math_surround:integer;
@!line_skip_limit:integer;
@!hsize:integer;
@!vsize:integer;
@!max_depth:integer;
@!split_max_depth:integer;
@!box_max_depth:integer;
@!hfuzz:integer;
@!vfuzz:integer;
@!delimiter_shortfall:integer;
@!null_delimiter_space:integer;
@!script_space:integer;
@!pre_display_size:integer;
@!display_width:integer;
@!display_indent:integer;
@!overfull_rule:integer;
@!hang_indent:integer;
@!h_offset:integer;
@!v_offset:integer;
@!emergency_stretch:integer;
@{ Koniec pseudozmiennych @t@>@}
@!ppp_fmt_file:memory_word;
@z
@x
@<Set init...@>=
xchr[@'40]:=' ';
xchr[@'41]:='!';
xchr[@'42]:='"';
xchr[@'43]:='#';
xchr[@'44]:='$';
xchr[@'45]:='%';
xchr[@'46]:='&';
xchr[@'47]:='''';@/
xchr[@'50]:='(';
xchr[@'51]:=')';
xchr[@'52]:='*';
xchr[@'53]:='+';
xchr[@'54]:=',';
xchr[@'55]:='-';
xchr[@'56]:='.';
xchr[@'57]:='/';@/
xchr[@'60]:='0';
xchr[@'61]:='1';
xchr[@'62]:='2';
xchr[@'63]:='3';
xchr[@'64]:='4';
xchr[@'65]:='5';
xchr[@'66]:='6';
xchr[@'67]:='7';@/
xchr[@'70]:='8';
xchr[@'71]:='9';
xchr[@'72]:=':';
xchr[@'73]:=';';
xchr[@'74]:='<';
xchr[@'75]:='=';
xchr[@'76]:='>';
xchr[@'77]:='?';@/
xchr[@'100]:='@@';
xchr[@'101]:='A';
xchr[@'102]:='B';
xchr[@'103]:='C';
xchr[@'104]:='D';
xchr[@'105]:='E';
xchr[@'106]:='F';
xchr[@'107]:='G';@/
xchr[@'110]:='H';
xchr[@'111]:='I';
xchr[@'112]:='J';
xchr[@'113]:='K';
xchr[@'114]:='L';
xchr[@'115]:='M';
xchr[@'116]:='N';
xchr[@'117]:='O';@/
xchr[@'120]:='P';
xchr[@'121]:='Q';
xchr[@'122]:='R';
xchr[@'123]:='S';
xchr[@'124]:='T';
xchr[@'125]:='U';
xchr[@'126]:='V';
xchr[@'127]:='W';@/
xchr[@'130]:='X';
xchr[@'131]:='Y';
xchr[@'132]:='Z';
xchr[@'133]:='[';
xchr[@'134]:='\';
xchr[@'135]:=']';
xchr[@'136]:='^';
xchr[@'137]:='_';@/
xchr[@'140]:='`';
xchr[@'141]:='a';
xchr[@'142]:='b';
xchr[@'143]:='c';
xchr[@'144]:='d';
xchr[@'145]:='e';
xchr[@'146]:='f';
xchr[@'147]:='g';@/
xchr[@'150]:='h';
xchr[@'151]:='i';
xchr[@'152]:='j';
xchr[@'153]:='k';
xchr[@'154]:='l';
xchr[@'155]:='m';
xchr[@'156]:='n';
xchr[@'157]:='o';@/
xchr[@'160]:='p';
xchr[@'161]:='q';
xchr[@'162]:='r';
xchr[@'163]:='s';
xchr[@'164]:='t';
xchr[@'165]:='u';
xchr[@'166]:='v';
xchr[@'167]:='w';@/
xchr[@'170]:='x';
xchr[@'171]:='y';
xchr[@'172]:='z';
xchr[@'173]:='{';
xchr[@'174]:='|';
xchr[@'175]:='}';
xchr[@'176]:='~';@/
@y
@z

@x
@<Set init...@>=
for i:=0 to @'37 do xchr[i]:=' ';
for i:=@'177 to @'377 do xchr[i]:=' ';
@y
@<Set init...@>=
for i:=0 to @'377 do xchr[i]:=char(i);
@z

@x
@p function a_open_in(var f:alpha_file):boolean;
  {open a text file for input}
begin reset(f,name_of_file,'/O'); a_open_in:=reset_OK(f);
end;
@#
function a_open_out(var f:alpha_file):boolean;
  {open a text file for output}
begin rewrite(f,name_of_file,'/O'); a_open_out:=rewrite_OK(f);
end;
@#
function b_open_in(var f:byte_file):boolean;
  {open a binary file for input}
begin reset(f,name_of_file,'/O'); b_open_in:=reset_OK(f);
end;
@#
function b_open_out(var f:byte_file):boolean;
  {open a binary file for output}
begin rewrite(f,name_of_file,'/O'); b_open_out:=rewrite_OK(f);
end;
@#
function w_open_in(var f:word_file):boolean;
  {open a word file for input}
begin reset(f,name_of_file,'/O'); w_open_in:=reset_OK(f);
end;
@#
function w_open_out(var f:word_file):boolean;
  {open a word file for output}
begin rewrite(f,name_of_file,'/O'); w_open_out:=rewrite_OK(f);
end;
@y
@p function a_open_in(var f:alpha_file):boolean;forward;
function a_open_out(var f:alpha_file):boolean;forward;
function b_open_in(var f:byte_file):boolean;forward;
function b_open_out(var f:byte_file):boolean;forward;
function w_open_in(var f:word_file):boolean;forward;
function w_open_out(var f:word_file):boolean;forward;
@z

@x
label exit;
begin t_open_in;
loop@+begin wake_up_terminal; write(term_out,'**'); update_terminal;
@y
label exit;
begin t_open_in;
if init_in_c(1) then begin loc:=first; init_terminal:=true; return; end;
loop@+begin wake_up_terminal; write(term_out,'**'); update_terminal;
@z

@x
@p @!init function get_strings_started:boolean; {initializes the string pool,
  but returns |false| if something goes wrong}
label done,exit;
var k,@!l:0..255; {small indices or counters}
@!m,@!n:text_char; {characters input from |pool_file|}
@!g:str_number; {garbage}
@!a:integer; {accumulator for check sum}
@!c:boolean; {check sum has been checked}
begin pool_ptr:=0; str_ptr:=0; str_start[0]:=0;
@<Make the first 256 strings@>;
@<Read the other strings from the \.{TEX.POOL} file and return |true|,
  or give an error message and return |false|@>;
exit:end;
tini
@y
@p @{ @!init function foo_get_strings_started:boolean; {initializes the string pool,
  but returns |false| if something goes wrong}
label done,exit;
var k,@!l:0..255; {small indices or counters}
@!m,@!n:text_char; {characters input from |pool_file|}
@!g:str_number; {garbage}
@!a:integer; {accumulator for check sum}
@!c:boolean; {check sum has been checked}
begin pool_ptr:=0; str_ptr:=0; str_start[0]:=0;
@<Make the first 256 strings@>;
@<Read the other strings from the \.{TEX.POOL} file and return |true|,
  or give an error message and return |false|@>;
exit:end;
tini @}
@z


@x
@!memory_word = record@;@/
  case four_choices of
  1: (@!int:integer);
  2: (@!gr:glue_ratio);
  3: (@!hh:two_halves);
  4: (@!qqqq:four_quarters);
  end;
@y
@!many_choices = 0..5 ;
@!pointer = halfword ;
@!@!memory_word = record@;@/
  case many_choices of
  1: (@!int:integer);
  2: (@!gr:glue_ratio);
  3: (@!hh:two_halves);
  4: (@!qqqq:four_quarters);
  5: (@!sc:integer);
  end;
@z



@x
while lh>2 do
  begin fget;fget;fget;fget;decr(lh); {ignore the rest of the header}
  end;
@y
while lh>2 do
  begin a=fbyte;a=fbyte;a=fbyte;a=fbyte;decr(lh); {ignore the rest of the header}
  end;
@z

@x
label big_switch,reswitch,main_loop,main_loop_wrapup,
  main_loop_move,main_loop_move+1,main_loop_move+2,main_loop_move_lig,
  main_loop_lookahead,main_loop_lookahead+1,
  main_lig_loop,main_lig_loop+1,main_lig_loop+2,
@y
label big_switch,reswitch,main_loop,main_loop_wrapup,
  main_loop_move,main_loop_move1,main_loop_move2,main_loop_move_lig,
  main_loop_lookahead,main_loop_lookahead1,
  main_lig_loop,main_lig_loop1,main_lig_loop2,
@z

@x
if main_k=non_address then goto main_loop_move+2; {no left boundary processing}
cur_r:=cur_l; cur_l:=non_char;
goto main_lig_loop+1; {begin with cursor after left boundary}
@y
if main_k=non_address then goto main_loop_move2; {no left boundary processing}
cur_r:=cur_l; cur_l:=non_char;
goto main_lig_loop1; {begin with cursor after left boundary}
@z

@x
main_loop_move+1:if not is_char_node(lig_stack) then goto main_loop_move_lig;
main_loop_move+2:if(cur_chr<font_bc[main_f])or(cur_chr>font_ec[main_f]) then
@y
main_loop_move1:if not is_char_node(lig_stack) then goto main_loop_move_lig;
main_loop_move2:if(cur_chr<font_bc[main_f])or(cur_chr>font_ec[main_f]) then
@z


@x
if cur_cmd=letter then goto main_loop_lookahead+1;
if cur_cmd=other_char then goto main_loop_lookahead+1;
if cur_cmd=char_given then goto main_loop_lookahead+1;
x_token; {now expand and set |cur_cmd|, |cur_chr|, |cur_tok|}
if cur_cmd=letter then goto main_loop_lookahead+1;
if cur_cmd=other_char then goto main_loop_lookahead+1;
if cur_cmd=char_given then goto main_loop_lookahead+1;
if cur_cmd=char_num then
  begin scan_char_num; cur_chr:=cur_val; goto main_loop_lookahead+1;
  end;
if cur_cmd=no_boundary then bchar:=non_char;
cur_r:=bchar; lig_stack:=null; goto main_lig_loop;
main_loop_lookahead+1: adjust_space_factor;
@y
if cur_cmd=letter then goto main_loop_lookahead1;
if cur_cmd=other_char then goto main_loop_lookahead1;
if cur_cmd=char_given then goto main_loop_lookahead1;
x_token; {now expand and set |cur_cmd|, |cur_chr|, |cur_tok|}
if cur_cmd=letter then goto main_loop_lookahead1;
if cur_cmd=other_char then goto main_loop_lookahead1;
if cur_cmd=char_given then goto main_loop_lookahead1;
if cur_cmd=char_num then
  begin scan_char_num; cur_chr:=cur_val; goto main_loop_lookahead1;
  end;
if cur_cmd=no_boundary then bchar:=non_char;
cur_r:=bchar; lig_stack:=null; goto main_lig_loop;
main_loop_lookahead1: adjust_space_factor;
@z

@x
if skip_byte(main_j)<=stop_flag then goto main_lig_loop+2;
main_k:=lig_kern_restart(main_f)(main_j);
main_lig_loop+1:main_j:=font_info[main_k].qqqq;
main_lig_loop+2:if next_char(main_j)=cur_r then
 if skip_byte(main_j)<=stop_flag then
  @<Do ligature or kern command, returning to |main_lig_loop|
  or |main_loop_wrapup| or |main_loop_move|@>;
if skip_byte(main_j)=qi(0) then incr(main_k)
else begin if skip_byte(main_j)>=stop_flag then goto main_loop_wrapup;
  main_k:=main_k+qo(skip_byte(main_j))+1;
  end;
goto main_lig_loop+1
@y
if skip_byte(main_j)<=stop_flag then goto main_lig_loop2;
main_k:=lig_kern_restart(main_f)(main_j);
main_lig_loop1:main_j:=font_info[main_k].qqqq;
main_lig_loop2:if next_char(main_j)=cur_r then
 if skip_byte(main_j)<=stop_flag then
  @<Do ligature or kern command, returning to |main_lig_loop|
  or |main_loop_wrapup| or |main_loop_move|@>;
if skip_byte(main_j)=qi(0) then incr(main_k)
else begin if skip_byte(main_j)>=stop_flag then goto main_loop_wrapup;
  main_k:=main_k+qo(skip_byte(main_j))+1;
  end;
goto main_lig_loop1
@z

@x
  if lig_stack=null then goto main_loop_wrapup
  else goto main_loop_move+1;
  end
@y
  if lig_stack=null then goto main_loop_wrapup
  else goto main_loop_move1;
  end
@z

@x
if cur_l<non_char then goto main_lig_loop;
main_k:=bchar_label[main_f]; goto main_lig_loop+1;
end
@y
if cur_l<non_char then goto main_lig_loop;
main_k:=bchar_label[main_f]; goto main_lig_loop1;
end
@z

@x
x:=fmt_file^.int;
if x<>@$ then goto bad_fmt; {check that strings are the same}
@y
pget(ppp_fmt_file); x:=ppp_fmt_file.int;
if x<>@$ then goto bad_fmt; {check that strings are the same}
@z

@x
history:=fatal_error_stop; {in case we quit during initialization}
t_open_out; {open the terminal for output}
if ready_already=314159 then goto start_of_TEX;
@y
foo_init;
history:=fatal_error_stop; {in case we quit during initialization}
t_open_out; {open the terminal for output}
if ready_already=314159 then goto start_of_TEX;
@z
