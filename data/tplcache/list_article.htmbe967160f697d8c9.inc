<?php
$z[0]=Array("field","",319,338);
$z[0][4]['name']="title";
$z[1]=Array("global","",339,365);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",406,435);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",475,533);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",1174,1209);
$z[4][4]['filename']="head.htm";
$z[5]=Array("channel","\r\n                    <div class=\"span2 col-xs-4\"> <a href=\"[field:typelink/]\" class=\"support_type_list normal\" title=\"[field:typename/]\">[field:typename/]</a> </div>\r\n                    ",2286,2676);
$z[5][4]['type']="son";
$z[5][4]['currentstyle']="<div class='span2 col-xs-4'><a href='~typelink~' class='support_type_list active'>~typename~</a></div>";
$z[6]=Array("list","\r\n                <div class=\"rowFluid\"> <a href=\"[field:arcurl/]\">\r\n                  <div class=\"kzf-mod-new-li\">\r\n                    <div class=\"span2\">\r\n                      <div class=\"kzf-mod-new-time-box\">\r\n                        <div class=\"kzf-mod-new-time-date\"><span>[field:pubdate function=strftime('%m',@me)/]</span>/<span>[field:pubdate function=strftime('%d',@me)/]</span></div>\r\n                        <div class=\"kzf-mod-new-time-year\">[field:pubdate function='strftime(\"%Y\",@me)'/]</div>\r\n                      </div>\r\n                    </div>\r\n                    <div class=\"span10\">\r\n                      <div class=\"kzf-mod-new-box\">\r\n                        <div class=\"kzf-mod-new-title\">[field:title/]</div>\r\n                        <div class=\"kzf-mod-new-text\"> [field:description function='cn_substr(@me,180)'/]</div>\r\n                      </div>\r\n                    </div>\r\n                  </div>\r\n                  </a> </div>\r\n                ",2950,3971);
$z[6][4]['pagesize']="8";
$z[7]=Array("pagelist","",4055,4121);
$z[7][4]['listitem']="index,end,pre,next,pageno";
$z[7][4]['listsize']="5";
$z[8]=Array("include","",4268,4305);
$z[8][4]['filename']="footer.htm";

?>