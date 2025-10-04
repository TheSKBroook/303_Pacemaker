/*
 * Automatically generated C code by
 * KIELER SCCharts - The Key to Efficient Modeling
 *
 * http://rtsys.informatik.uni-kiel.de/kieler
 */

#include "timing.h"

#include "sschart.h"

void logic(TickData* d) {
  d->_g25 = d->_pg25;
  if (d->_g25) {
    d->_PaceMaker_local_vrp_clk += d->deltaT;
  }
  d->_g28 = d->_pg28;
  d->_cg28 = d->_PaceMaker_local_vrp_clk >= VRP_VALUE;
  d->_g29 = d->_g28 && d->_cg28;
  if (d->_g29) {
    d->_PaceMaker_local__Atrig = 1;
  }
  d->AP = 0;
  d->VP = 0;
  d->ignore_AEvent = 0;
  d->ignore_VEvent = 0;
  d->uri_time = 0;
  d->lri_time = 0;
  d->_g153 = d->_pg169;
  if (d->_g153) {
    d->uri_time |= 1;
  }
  d->_g109 = d->_pg74;
  d->_cg109 = !d->uri_time;
  d->_g110 = d->_g109 && d->_cg109;
  if (d->_g110) {
    d->VP |= 1;
  }
  d->_g76 = d->_pg111;
  d->_g70 = d->_pg136_e3;
  d->_g73_e1 = !(d->_g76 || d->_g70);
  d->_g95 = d->_pg77;
  d->_g96 = d->_g95 && d->VS;
  if (d->_g96) {
    d->_PaceMaker_local__Atrig2 = 1;
  }
  d->_g91 = d->_pg72;
  if (d->_g91) {
    d->_PaceMaker_local_avi_clk += d->deltaT;
  }
  d->_g185 = d->_pg186_e1;
  if (d->_g185) {
    d->lri_time |= 1;
  }
  d->_g98 = d->_g95 && !d->VS;
  d->_cg98 = !d->VS && d->_PaceMaker_local_avi_clk >= AVI_VALUE - 1 && !d->uri_time && d->lri_time;
  d->_g99 = d->_g98 && d->_cg98;
  if (d->_g99) {
    d->_PaceMaker_local__Atrig3 = 1;
  }
  d->_g98 = d->_g98 && !d->_cg98;
  d->_cg100 = !d->VS && d->_PaceMaker_local_avi_clk >= AVI_VALUE - 1 && d->uri_time;
  d->_g101 = d->_g98 && d->_cg100;
  if (d->_g101) {
    d->_PaceMaker_local__Atrig4 = 1;
  }
  d->_g100 = d->_g98 && !d->_cg100;
  d->_cg102 = !d->VS && !d->lri_time;
  d->_g103 = d->_g100 && d->_cg102;
  if (d->_g103) {
    d->_PaceMaker_local__Atrig5 = 1;
  }
  d->sleepT = 1000.0;
  d->_g70 = d->_g70 || d->_g76;
  d->_cg71 = d->_PaceMaker_local_avi_clk < AVI_VALUE - 1;
  d->_g76 = d->_g70 && d->_cg71;
  if (d->_g76) {
    d->sleepT = (d->sleepT < (AVI_VALUE - 1 - d->_PaceMaker_local_avi_clk)) ? d->sleepT : (AVI_VALUE - 1 - d->_PaceMaker_local_avi_clk);
  }
  d->_cg72 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g71 = d->_g70 && !d->_cg71;
  d->_cg74 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g73 = (d->_g76 && d->_cg72) || (d->_g71 && d->_cg74);
  d->_g87 = d->_pg68;
  d->_g81 = d->_pg104;
  d->_g84_e2 = !(d->_g87 || d->_g81);
  d->_g81 = d->_g81 || d->_g87;
  d->_cg82 = d->_PaceMaker_local_avi_clk < AVI_VALUE - 1;
  d->_g87 = d->_g81 && d->_cg82;
  if (d->_g87) {
    d->sleepT = (d->sleepT < (AVI_VALUE - 1 - d->_PaceMaker_local_avi_clk)) ? d->sleepT : (AVI_VALUE - 1 - d->_PaceMaker_local_avi_clk);
  }
  d->_cg83 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g82 = d->_g81 && !d->_cg82;
  d->_cg85 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g84 = (d->_g87 && d->_cg83) || (d->_g82 && d->_cg85);
  d->_g92_e3 = !d->_g91;
  d->_cg91 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g92 = d->_g91 && d->_cg91;
  d->_g95 = !d->_g95;
  d->_g101 = d->_g96 || d->_g99 || d->_g101 || d->_g103;
  d->_g96 = (d->_g73_e1 || d->_g73) && (d->_g84_e2 || d->_g84) && (d->_g92_e3 || d->_g92) && (d->_g95 || d->_g101) && (d->_g73 || d->_g84 || d->_g92 || d->_g101);
  d->_cg104 = d->_PaceMaker_local__Atrig2;
  d->_g99 = d->_g96 && !d->_cg104;
  d->_cg105 = d->_PaceMaker_local__Atrig3;
  d->_g103 = d->_g99 && d->_cg105;
  if (d->_g103) {
    d->VP |= 1;
  }
  d->_g92_e3 = d->_g99 && !d->_cg105;
  d->_cg107 = d->_PaceMaker_local__Atrig4;
  d->_g73_e1 = d->_g92_e3 && !d->_cg107;
  if (d->_g73_e1) {
    d->VP |= 1;
  }
  d->_g97_e4 = d->_pg29_e4;
  d->_cg5 = d->VS || d->VP;
  d->_g84 = d->_g97_e4 && d->_cg5;
  if (d->_g84) {
    d->_PaceMaker_local_vrp_clk = 0.0;
    d->_PaceMaker_local__Atrig = 0;
  }
  d->_g73 = d->_pg97;
  if (d->_g73) {
    d->ignore_VEvent |= 1;
  }
  d->_g84_e2 = d->_g84 || d->_g73;
  d->_cg8 = d->_PaceMaker_local__Atrig;
  d->_g97 = d->_g84_e2 && !d->_cg8;
  d->_g92 = !d->_g97;
  d->_g105 = d->_g84_e2 && d->_cg8;
  d->_g11 = d->_pg16;
  d->_g8 = d->_pg19;
  d->_g20 = d->_g84 || d->_g11 || d->_g8;
  d->_cg13 = d->_PaceMaker_local_vrp_clk < VRP_VALUE;
  d->_g17 = d->_g20 && !d->_cg13;
  d->_cg18 = d->_PaceMaker_local__Atrig;
  d->_g19 = d->_g17 && !d->_cg18;
  d->_g13 = d->_g20 && d->_cg13;
  if (d->_g13) {
    d->sleepT = (d->sleepT < (VRP_VALUE - d->_PaceMaker_local_vrp_clk)) ? d->sleepT : (VRP_VALUE - d->_PaceMaker_local_vrp_clk);
  }
  d->_cg14 = d->_PaceMaker_local__Atrig;
  d->_g16 = d->_g13 && !d->_cg14;
  d->_g15_e2 = !(d->_g19 || d->_g16);
  d->_g18 = (d->_g13 && d->_cg14) || (d->_g17 && d->_cg18);
  d->_g14 = d->_g84 || d->_g25;
  d->_cg22 = d->_PaceMaker_local__Atrig;
  d->_g25 = d->_g14 && !d->_cg22;
  d->_g23_e3 = !d->_g25;
  d->_g22 = d->_g14 && d->_cg22;
  d->_g28 = d->_g84 || (d->_g28 && !d->_cg28);
  d->_g6 = !d->_g28;
  d->_g15 = (d->_g92 || d->_g105) && (d->_g15_e2 || d->_g18) && (d->_g23_e3 || d->_g22) && (d->_g6 || d->_g29) && (d->_g105 || d->_g18 || d->_g22 || d->_g29);
  d->_g29_e4 = d->_GO || d->_g15 || (d->_g97_e4 && !d->_cg5);
  d->_g9 = d->_pg54;
  if (d->_g9) {
    d->_PaceMaker_local_pvarp_clk += d->deltaT;
  }
  d->_g29 = d->_pg35;
  d->_cg57 = d->_PaceMaker_local_pvarp_clk >= PVARP_VALUE;
  d->_g23 = d->_g29 && d->_cg57;
  if (d->_g23) {
    d->_PaceMaker_local__Atrig1 = 1;
  }
  d->_g23_e3 = d->_pg38_e1;
  d->_cg34 = d->VS || d->VP;
  d->_g9_e1 = d->_g23_e3 && d->_cg34;
  if (d->_g9_e1) {
    d->_PaceMaker_local_pvarp_clk = 0.0;
    d->_PaceMaker_local__Atrig1 = 0;
  }
  d->_g15_e2 = d->_pg30;
  if (d->_g15_e2) {
    d->ignore_AEvent |= 1;
  }
  d->_g5 = d->_g9_e1 || d->_g15_e2;
  d->_cg37 = d->_PaceMaker_local__Atrig1;
  d->_g30 = d->_g5 && !d->_cg37;
  d->_g40 = !d->_g30;
  d->_g37 = d->_g5 && d->_cg37;
  d->_g46 = d->_pg45;
  d->_g49 = d->_pg48;
  d->_g49 = d->_g9_e1 || d->_g46 || d->_g49;
  d->_cg42 = d->_PaceMaker_local_pvarp_clk < PVARP_VALUE;
  d->_g46 = d->_g49 && !d->_cg42;
  d->_cg47 = d->_PaceMaker_local__Atrig1;
  d->_g48 = d->_g46 && !d->_cg47;
  d->_g42 = d->_g49 && d->_cg42;
  if (d->_g42) {
    d->sleepT = (d->sleepT < (PVARP_VALUE - d->_PaceMaker_local_pvarp_clk)) ? d->sleepT : (PVARP_VALUE - d->_PaceMaker_local_pvarp_clk);
  }
  d->_cg43 = d->_PaceMaker_local__Atrig1;
  d->_g45 = d->_g42 && !d->_cg43;
  d->_g44_e2 = !(d->_g48 || d->_g45);
  d->_g47 = (d->_g42 && d->_cg43) || (d->_g46 && d->_cg47);
  d->_g43 = d->_g9_e1 || d->_g9;
  d->_cg51 = d->_PaceMaker_local__Atrig1;
  d->_g54 = d->_g43 && !d->_cg51;
  d->_g52_e3 = !d->_g54;
  d->_g51 = d->_g43 && d->_cg51;
  d->_g35 = d->_g9_e1 || (d->_g29 && !d->_cg57);
  d->_g57 = !d->_g35;
  d->_g38 = (d->_g40 || d->_g37) && (d->_g44_e2 || d->_g47) && (d->_g52_e3 || d->_g51) && (d->_g57 || d->_g23) && (d->_g37 || d->_g47 || d->_g51 || d->_g23);
  d->_g38_e1 = d->_GO || d->_g38 || (d->_g23_e3 && !d->_cg34);
  d->_g44 = d->_pg102;
  d->_g58 = d->_pg91;
  d->_g52 = !(d->_g44 || d->_g58);
  d->_g58_e4 = d->_pg107;
  d->_cg134 = d->VS && !d->ignore_VEvent;
  d->_g44_e2 = d->_g58_e4 && d->_cg134;
  if (d->_g44_e2) {
    d->_PaceMaker_local__Atrig6 = 1;
  }
  d->_g52_e3 = d->_g58_e4 && !d->_cg134;
  d->_cg137 = d->AS && !d->ignore_AEvent;
  d->_g59 = d->_g52_e3 && d->_cg137;
  if (d->_g59) {
    d->_PaceMaker_local__Atrig7 = 1;
  }
  d->_g34 = d->_pg109;
  if (d->_g34) {
    d->_PaceMaker_local_aei_clk += d->deltaT;
  }
  d->_g137 = d->_g52_e3 && !d->_cg137;
  d->_cg139 = !d->AS && d->_PaceMaker_local_aei_clk >= AEI_VALUE;
  d->_g140 = d->_g137 && d->_cg139;
  if (d->_g140) {
    d->_PaceMaker_local__Atrig8 = 1;
  }
  d->_g120 = d->_g58 || d->_g44;
  d->_cg121 = d->_PaceMaker_local_aei_clk < AEI_VALUE;
  d->_g126 = d->_g120 && d->_cg121;
  if (d->_g126) {
    d->sleepT = (d->sleepT < (AEI_VALUE - d->_PaceMaker_local_aei_clk)) ? d->sleepT : (AEI_VALUE - d->_PaceMaker_local_aei_clk);
  }
  d->_cg122 = d->_PaceMaker_local__Atrig6 || d->_PaceMaker_local__Atrig7 || d->_PaceMaker_local__Atrig8;
  d->_g121 = d->_g120 && !d->_cg121;
  d->_cg124 = d->_PaceMaker_local__Atrig6 || d->_PaceMaker_local__Atrig7 || d->_PaceMaker_local__Atrig8;
  d->_g123 = (d->_g126 && d->_cg122) || (d->_g121 && d->_cg124);
  d->_g131_e2 = !d->_g34;
  d->_cg130 = d->_PaceMaker_local__Atrig6 || d->_PaceMaker_local__Atrig7 || d->_PaceMaker_local__Atrig8;
  d->_g131 = d->_g34 && d->_cg130;
  d->_g134 = !d->_g58_e4;
  d->_g138 = d->_g44_e2 || d->_g59 || d->_g140;
  d->_g135 = (d->_g52 || d->_g123) && (d->_g131_e2 || d->_g131) && (d->_g134 || d->_g138) && (d->_g123 || d->_g131 || d->_g138);
  d->_cg141 = d->_PaceMaker_local__Atrig6;
  d->_g140 = d->_g135 && !d->_cg141;
  d->_cg142 = d->_PaceMaker_local__Atrig7;
  d->_g123 = d->_g140 && !d->_cg142;
  if (d->_g123) {
    d->AP |= 1;
  }
  d->_g131_e2 = d->_pg123_e1;
  d->_cg65 = (d->AS || d->AP) && !d->ignore_AEvent;
  d->_g123_e1 = d->_GO || (d->_g96 && d->_cg104) || d->_g103 || d->_g110 || d->_g73_e1 || (d->_g131_e2 && !d->_cg65);
  d->_g131 = d->_g131_e2 && d->_cg65;
  if (d->_g131) {
    d->_PaceMaker_local_avi_clk = 0.0;
    d->_PaceMaker_local__Atrig2 = 0;
    d->_PaceMaker_local__Atrig3 = 0;
    d->_PaceMaker_local__Atrig4 = 0;
    d->_PaceMaker_local__Atrig5 = 0;
  }
  d->_cg67 = d->_PaceMaker_local_avi_clk < AVI_VALUE - 1;
  d->_g136 = d->_g131 && d->_cg67;
  if (d->_g136) {
    d->sleepT = (d->sleepT < (AVI_VALUE - 1 - d->_PaceMaker_local_avi_clk)) ? d->sleepT : (AVI_VALUE - 1 - d->_PaceMaker_local_avi_clk);
  }
  d->_cg68 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g136_e3 = (d->_g136 && !d->_cg68) || (d->_g76 && !d->_cg72);
  d->_g110 = d->_g131 && !d->_cg67;
  d->_cg77 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g111 = (d->_g71 && !d->_cg74) || (d->_g110 && !d->_cg77);
  d->_cg78 = d->_PaceMaker_local_avi_clk < AVI_VALUE - 1;
  d->_g106 = d->_g131 && d->_cg78;
  if (d->_g106) {
    d->sleepT = (d->sleepT < (AVI_VALUE - 1 - d->_PaceMaker_local_avi_clk)) ? d->sleepT : (AVI_VALUE - 1 - d->_PaceMaker_local_avi_clk);
  }
  d->_cg79 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g104 = (d->_g106 && !d->_cg79) || (d->_g87 && !d->_cg83);
  d->_g65 = d->_g131 && !d->_cg78;
  d->_cg88 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g68 = (d->_g82 && !d->_cg85) || (d->_g65 && !d->_cg88);
  d->_cg89 = d->_PaceMaker_local__Atrig2 || d->_PaceMaker_local__Atrig3 || d->_PaceMaker_local__Atrig4 || d->_PaceMaker_local__Atrig5;
  d->_g72 = (d->_g131 && !d->_cg89) || (d->_g91 && !d->_cg91);
  d->_g77 = d->_g131 || (d->_g100 && !d->_cg102);
  d->_g74 = (d->_g92_e3 && d->_cg107) || (d->_g109 && !d->_cg109);
  d->_g79 = d->_pg83;
  d->_cg115 = (d->VS || d->VP) && !d->ignore_VEvent;
  d->_g83 = d->_GO || (d->_g140 && d->_cg142) || d->_g123 || (d->_g79 && !d->_cg115);
  d->_g88 = (d->_g79 && d->_cg115) || (d->_g135 && d->_cg141);
  if (d->_g88) {
    d->_PaceMaker_local_aei_clk = 0.0;
    d->_PaceMaker_local__Atrig6 = 0;
    d->_PaceMaker_local__Atrig7 = 0;
    d->_PaceMaker_local__Atrig8 = 0;
  }
  d->_cg117 = d->_PaceMaker_local_aei_clk < AEI_VALUE;
  d->_g85 = d->_g88 && d->_cg117;
  if (d->_g85) {
    d->sleepT = (d->sleepT < (AEI_VALUE - d->_PaceMaker_local_aei_clk)) ? d->sleepT : (AEI_VALUE - d->_PaceMaker_local_aei_clk);
  }
  d->_cg118 = d->_PaceMaker_local__Atrig6 || d->_PaceMaker_local__Atrig7 || d->_PaceMaker_local__Atrig8;
  d->_g91 = (d->_g85 && !d->_cg118) || (d->_g126 && !d->_cg122);
  d->_g66 = d->_g88 && !d->_cg117;
  d->_cg127 = d->_PaceMaker_local__Atrig6 || d->_PaceMaker_local__Atrig7 || d->_PaceMaker_local__Atrig8;
  d->_g102 = (d->_g121 && !d->_cg124) || (d->_g66 && !d->_cg127);
  d->_cg128 = d->_PaceMaker_local__Atrig6 || d->_PaceMaker_local__Atrig7 || d->_PaceMaker_local__Atrig8;
  d->_g109 = (d->_g88 && !d->_cg128) || (d->_g34 && !d->_cg130);
  d->_g107 = d->_g88 || (d->_g137 && !d->_cg139);
  d->_g142 = !d->_g153;
  d->_g143 = d->_pg177;
  d->_cg172 = d->VS && !d->ignore_VEvent;
  d->_g141 = d->_g143 && d->_cg172;
  if (d->_g141) {
    d->_PaceMaker_local__Atrig9 = 1;
  }
  d->_g115 = d->_pg149;
  if (d->_g115) {
    d->_PaceMaker_local_uri_clk += d->deltaT;
  }
  d->_g118 = d->_g143 && !d->_cg172;
  d->_cg175 = d->_PaceMaker_local_uri_clk >= URI_VALUE - 1 && !(d->VS || d->VP);
  d->_g122 = d->_g118 && d->_cg175;
  if (d->_g122) {
    d->_PaceMaker_local__Atrig10 = 1;
  }
  d->_cg153 = d->_PaceMaker_local__Atrig9 || d->_PaceMaker_local__Atrig10;
  d->_g127 = d->_g153 && d->_cg153;
  d->_g124 = d->_pg161;
  d->_g130 = d->_pg161_e2;
  d->_g116 = !(d->_g124 || d->_g130);
  d->_g139 = d->_g130 || d->_g124;
  d->_cg159 = d->_PaceMaker_local_uri_clk < URI_VALUE - 1;
  d->_g164 = d->_g139 && d->_cg159;
  if (d->_g164) {
    d->sleepT = (d->sleepT < (URI_VALUE - 1 - d->_PaceMaker_local_uri_clk)) ? d->sleepT : (URI_VALUE - 1 - d->_PaceMaker_local_uri_clk);
  }
  d->_cg160 = d->_PaceMaker_local__Atrig9 || d->_PaceMaker_local__Atrig10;
  d->_g158 = d->_g139 && !d->_cg159;
  d->_cg162 = d->_PaceMaker_local__Atrig9 || d->_PaceMaker_local__Atrig10;
  d->_g159 = (d->_g164 && d->_cg160) || (d->_g158 && d->_cg162);
  d->_g169_e3 = !d->_g115;
  d->_cg168 = d->_PaceMaker_local__Atrig9 || d->_PaceMaker_local__Atrig10;
  d->_g169 = d->_g115 && d->_cg168;
  d->_g172 = !d->_g143;
  d->_g176 = d->_g141 || d->_g122;
  d->_g173 = (d->_g142 || d->_g127) && (d->_g116 || d->_g159) && (d->_g169_e3 || d->_g169) && (d->_g172 || d->_g176) && (d->_g127 || d->_g159 || d->_g169 || d->_g176);
  d->_cg177 = d->_PaceMaker_local__Atrig9;
  d->_g154_e1 = d->_pg169_e3;
  d->_cg149 = (d->VS || d->VP) && !d->ignore_VEvent;
  d->_g169_e3 = d->_GO || (d->_g173 && !d->_cg177) || (d->_g154_e1 && !d->_cg149);
  d->_g154 = (d->_g154_e1 && d->_cg149) || (d->_g173 && d->_cg177);
  if (d->_g154) {
    d->_PaceMaker_local_uri_clk = 0.0;
    d->_PaceMaker_local__Atrig9 = 0;
    d->_PaceMaker_local__Atrig10 = 0;
  }
  d->_cg151 = d->_PaceMaker_local__Atrig9 || d->_PaceMaker_local__Atrig10;
  d->_g169 = (d->_g154 && !d->_cg151) || (d->_g153 && !d->_cg153);
  d->_cg155 = d->_PaceMaker_local_uri_clk < URI_VALUE - 1;
  d->_g174_e4 = d->_g154 && d->_cg155;
  if (d->_g174_e4) {
    d->sleepT = (d->sleepT < (URI_VALUE - 1 - d->_PaceMaker_local_uri_clk)) ? d->sleepT : (URI_VALUE - 1 - d->_PaceMaker_local_uri_clk);
  }
  d->_cg156 = d->_PaceMaker_local__Atrig9 || d->_PaceMaker_local__Atrig10;
  d->_g161_e2 = (d->_g174_e4 && !d->_cg156) || (d->_g164 && !d->_cg160);
  d->_g174 = d->_g154 && !d->_cg155;
  d->_cg165 = d->_PaceMaker_local__Atrig9 || d->_PaceMaker_local__Atrig10;
  d->_g161 = (d->_g158 && !d->_cg162) || (d->_g174 && !d->_cg165);
  d->_cg166 = d->_PaceMaker_local__Atrig9 || d->_PaceMaker_local__Atrig10;
  d->_g149 = (d->_g154 && !d->_cg166) || (d->_g115 && !d->_cg168);
  d->_g177 = d->_g154 || (d->_g118 && !d->_cg175);
  d->_g153 = !d->_g185;
  d->_g156 = d->_pg181;
  if (d->_g156) {
    d->_PaceMaker_local_lri_clk += d->deltaT;
  }
  d->_g160 = d->_pg209;
  d->_cg204 = d->_PaceMaker_local_lri_clk >= LRI_VALUE - 1 && !(d->VS || d->VP);
  d->_g165 = d->_g160 && d->_cg204;
  if (d->_g165) {
    d->_PaceMaker_local__Atrig11 = 1;
  }
  d->_g162 = d->_g160 && !d->_cg204;
  d->_cg207 = (d->VS || d->VP) && !d->ignore_VEvent;
  d->_g168 = d->_g162 && d->_cg207;
  if (d->_g168) {
    d->_PaceMaker_local__Atrig12 = 1;
  }
  d->_cg185 = d->_PaceMaker_local__Atrig11 || d->_PaceMaker_local__Atrig12;
  d->_g175 = d->_g185 && d->_cg185;
  d->_g150 = d->_pg186;
  d->_g190 = d->_pg206_e4;
  d->_g193_e2 = !(d->_g150 || d->_g190);
  d->_g196 = d->_g190 || d->_g150;
  d->_cg191 = d->_PaceMaker_local_lri_clk < LRI_VALUE - 1;
  d->_g190 = d->_g196 && d->_cg191;
  if (d->_g190) {
    d->sleepT = (d->sleepT < (LRI_VALUE - 1 - d->_PaceMaker_local_lri_clk)) ? d->sleepT : (LRI_VALUE - 1 - d->_PaceMaker_local_lri_clk);
  }
  d->_cg192 = d->_PaceMaker_local__Atrig11 || d->_PaceMaker_local__Atrig12;
  d->_g191 = d->_g196 && !d->_cg191;
  d->_cg194 = d->_PaceMaker_local__Atrig11 || d->_PaceMaker_local__Atrig12;
  d->_g193 = (d->_g190 && d->_cg192) || (d->_g191 && d->_cg194);
  d->_g201_e3 = !d->_g156;
  d->_cg200 = d->_PaceMaker_local__Atrig11 || d->_PaceMaker_local__Atrig12;
  d->_g201 = d->_g156 && d->_cg200;
  d->_g204 = !d->_g160;
  d->_g208 = d->_g165 || d->_g168;
  d->_g205 = (d->_g153 || d->_g175) && (d->_g193_e2 || d->_g193) && (d->_g201_e3 || d->_g201) && (d->_g204 || d->_g208) && (d->_g175 || d->_g193 || d->_g201 || d->_g208);
  d->_cg209 = d->_PaceMaker_local__Atrig11;
  d->_g201 = d->_pg193_e2;
  d->_cg181 = (d->VS || d->VP) && !d->ignore_VEvent;
  d->_g193_e2 = d->_GO || (d->_g205 && d->_cg209) || (d->_g201 && !d->_cg181);
  d->_g193 = (d->_g201 && d->_cg181) || (d->_g205 && !d->_cg209);
  if (d->_g193) {
    d->_PaceMaker_local_lri_clk = 0.0;
    d->_PaceMaker_local__Atrig11 = 0;
    d->_PaceMaker_local__Atrig12 = 0;
  }
  d->_cg183 = d->_PaceMaker_local__Atrig11 || d->_PaceMaker_local__Atrig12;
  d->_g186_e1 = (d->_g193 && !d->_cg183) || (d->_g185 && !d->_cg185);
  d->_cg187 = d->_PaceMaker_local_lri_clk < LRI_VALUE - 1;
  d->_g206 = d->_g193 && d->_cg187;
  if (d->_g206) {
    d->sleepT = (d->sleepT < (LRI_VALUE - 1 - d->_PaceMaker_local_lri_clk)) ? d->sleepT : (LRI_VALUE - 1 - d->_PaceMaker_local_lri_clk);
  }
  d->_cg188 = d->_PaceMaker_local__Atrig11 || d->_PaceMaker_local__Atrig12;
  d->_g206_e4 = (d->_g206 && !d->_cg188) || (d->_g190 && !d->_cg192);
  d->_g201_e3 = d->_g193 && !d->_cg187;
  d->_cg197 = d->_PaceMaker_local__Atrig11 || d->_PaceMaker_local__Atrig12;
  d->_g186 = (d->_g191 && !d->_cg194) || (d->_g201_e3 && !d->_cg197);
  d->_cg198 = d->_PaceMaker_local__Atrig11 || d->_PaceMaker_local__Atrig12;
  d->_g181 = (d->_g193 && !d->_cg198) || (d->_g156 && !d->_cg200);
  d->_g209 = d->_g193 || (d->_g162 && !d->_cg207);
}

void reset(TickData* d) {
  d->_GO = 1;
  d->_TERM = 0;
  d->deltaT = 0.0;
  d->sleepT = 0.0;
  d->AP = 0;
  d->VP = 0;
  d->ignore_AEvent = 0;
  d->ignore_VEvent = 0;
  d->uri_time = 0;
  d->lri_time = 0;
  d->_pg25 = 0;
  d->_pg28 = 0;
  d->_pg169 = 0;
  d->_pg74 = 0;
  d->_pg111 = 0;
  d->_pg136_e3 = 0;
  d->_pg77 = 0;
  d->_pg72 = 0;
  d->_pg186_e1 = 0;
  d->_pg68 = 0;
  d->_pg104 = 0;
  d->_pg29_e4 = 0;
  d->_pg97 = 0;
  d->_pg16 = 0;
  d->_pg19 = 0;
  d->_pg54 = 0;
  d->_pg35 = 0;
  d->_pg38_e1 = 0;
  d->_pg30 = 0;
  d->_pg45 = 0;
  d->_pg48 = 0;
  d->_pg102 = 0;
  d->_pg91 = 0;
  d->_pg107 = 0;
  d->_pg109 = 0;
  d->_pg123_e1 = 0;
  d->_pg83 = 0;
  d->_pg177 = 0;
  d->_pg149 = 0;
  d->_pg161 = 0;
  d->_pg161_e2 = 0;
  d->_pg169_e3 = 0;
  d->_pg181 = 0;
  d->_pg209 = 0;
  d->_pg186 = 0;
  d->_pg206_e4 = 0;
  d->_pg193_e2 = 0;
}

void tick(TickData* d) {
  logic(d);

  d->_pg25 = d->_g25;
  d->_pg28 = d->_g28;
  d->_pg169 = d->_g169;
  d->_pg74 = d->_g74;
  d->_pg111 = d->_g111;
  d->_pg136_e3 = d->_g136_e3;
  d->_pg77 = d->_g77;
  d->_pg72 = d->_g72;
  d->_pg186_e1 = d->_g186_e1;
  d->_pg68 = d->_g68;
  d->_pg104 = d->_g104;
  d->_pg29_e4 = d->_g29_e4;
  d->_pg97 = d->_g97;
  d->_pg16 = d->_g16;
  d->_pg19 = d->_g19;
  d->_pg54 = d->_g54;
  d->_pg35 = d->_g35;
  d->_pg38_e1 = d->_g38_e1;
  d->_pg30 = d->_g30;
  d->_pg45 = d->_g45;
  d->_pg48 = d->_g48;
  d->_pg102 = d->_g102;
  d->_pg91 = d->_g91;
  d->_pg107 = d->_g107;
  d->_pg109 = d->_g109;
  d->_pg123_e1 = d->_g123_e1;
  d->_pg83 = d->_g83;
  d->_pg177 = d->_g177;
  d->_pg149 = d->_g149;
  d->_pg161 = d->_g161;
  d->_pg161_e2 = d->_g161_e2;
  d->_pg169_e3 = d->_g169_e3;
  d->_pg181 = d->_g181;
  d->_pg209 = d->_g209;
  d->_pg186 = d->_g186;
  d->_pg206_e4 = d->_g206_e4;
  d->_pg193_e2 = d->_g193_e2;
  d->_GO = 0;
}
