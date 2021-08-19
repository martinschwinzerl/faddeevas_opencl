#include "dawson/definitions.h"
#include "dawson/coefficients.h"

typedef CERRF_REAL_TYPE real_type;
typedef CERRF_INTEGER_TYPE int_type;

real_type const CERRF_DAWSON_XN[ CERRF_DAWSON_N_XN ] = {
    ( real_type )+0.0,                                 /* n =   0 */
    ( real_type )+0.21052631578947367252396816184046,  /* n =   1 */
    ( real_type )+0.42105263157894734504793632368091,  /* n =   2 */
    ( real_type )+0.63157894736842101757190448552137,  /* n =   3 */
    ( real_type )+0.84210526315789469009587264736183,  /* n =   4 */
    ( real_type )+1.0526315789473683626198408092023,   /* n =   5 */
    ( real_type )+1.2631578947368420351438089710427,   /* n =   6 */
    ( real_type )+1.4736842105263157076677771328832,   /* n =   7 */
    ( real_type )+1.6842105263157893801917452947237,   /* n =   8 */
    ( real_type )+1.8947368421052630527157134565641,   /* n =   9 */
    ( real_type )+2.1052631578947367252396816184046,   /* n =  10 */
    ( real_type )+2.3157894736842106198082547052763,   /* n =  11 */
    ( real_type )+2.5263157894736840702876179420855,   /* n =  12 */
    ( real_type )+2.7368421052631575207669811788946,   /* n =  13 */
    ( real_type )+2.9473684210526314153355542657664,   /* n =  14 */
    ( real_type )+3.1578947368421053099041273526382,   /* n =  15 */
    ( real_type )+3.3684210526315787603834905894473,   /* n =  16 */
    ( real_type )+3.5789473684210522108628538262565,   /* n =  17 */
    ( real_type )+3.7894736842105261054314269131282,   /* n =  18 */
    ( real_type )+4.0,                                 /* n =  19 */
    ( real_type )+4.2105263157894734504793632368091,   /* n =  20 */
    ( real_type )+4.4210526315789469009587264736183,   /* n =  21 */
    ( real_type )+4.6315789473684212396165094105527,   /* n =  22 */
    ( real_type )+4.8421052631578946900958726473618,   /* n =  23 */
    ( real_type )+5.052631578947368140575235884171,    /* n =  24 */
    ( real_type )+5.2631578947368415910545991209801,   /* n =  25 */
    ( real_type )+5.4736842105263150415339623577893,   /* n =  26 */
    ( real_type )+5.6842105263157893801917452947237,   /* n =  27 */
    ( real_type )+5.8947368421052628306711085315328,   /* n =  28 */
    ( real_type )+6.105263157894736281150471768342,    /* n =  29 */
    ( real_type )+6.3157894736842106198082547052763,   /* n =  30 */
    ( real_type )+6.5263157894736840702876179420855,   /* n =  31 */
    ( real_type )+6.7368421052631575207669811788946,   /* n =  32 */
    ( real_type )+6.9473684210526309712463444157038,   /* n =  33 */
    ( real_type )+7.1578947368421044217257076525129,   /* n =  34 */
    ( real_type )+7.3684210526315787603834905894473,   /* n =  35 */
    ( real_type )+7.5789473684210522108628538262565,   /* n =  36 */
    ( real_type )+7.7894736842105256613422170630656,   /* n =  37 */
    ( real_type )+8.0,                                 /* n =  38 */
    ( real_type )+8.2105263157894725623009435366839,   /* n =  39 */
    ( real_type )+8.4210526315789469009587264736183,   /* n =  40 */
    ( real_type )+8.6315789473684212396165094105527,   /* n =  41 */
    ( real_type )+8.8421052631578938019174529472366,   /* n =  42 */
    ( real_type )+9.052631578947368140575235884171,    /* n =  43 */
    ( real_type )+9.2631578947368424792330188211054,   /* n =  44 */
    ( real_type )+9.4736842105263150415339623577893,   /* n =  45 */
    ( real_type )+9.6842105263157893801917452947237,   /* n =  46 */
    ( real_type )+9.8947368421052619424926888314076,   /* n =  47 */
    ( real_type )+10.105263157894736281150471768342,   /* n =  48 */
    ( real_type )+10.315789473684210619808254705276,   /* n =  49 */
    ( real_type )+10.52631578947368318210919824196,    /* n =  50 */
    ( real_type )+10.736842105263157520766981178895,   /* n =  51 */
    ( real_type )+10.947368421052630083067924715579,   /* n =  52 */
    ( real_type )+11.157894736842104421725707652513,   /* n =  53 */
    ( real_type )+11.368421052631578760383490589447,   /* n =  54 */
    ( real_type )+11.578947368421051322684434126131,   /* n =  55 */
    ( real_type )+11.789473684210525661342217063066,   /* n =  56 */
    ( real_type )+12.0,                                /* n =  57 */
    ( real_type )+12.210526315789472562300943536684,   /* n =  58 */
    ( real_type )+12.421052631578946900958726473618,   /* n =  59 */
    ( real_type )+12.631578947368421239616509410553,   /* n =  60 */
    ( real_type )+12.842105263157893801917452947237,   /* n =  61 */
    ( real_type )+13.052631578947368140575235884171,   /* n =  62 */
    ( real_type )+13.263157894736840702876179420855,   /* n =  63 */
    ( real_type )+13.473684210526315041533962357789,   /* n =  64 */
    ( real_type )+13.684210526315789380191745294724,   /* n =  65 */
    ( real_type )+13.894736842105261942492688831408,   /* n =  66 */
    ( real_type )+14.105263157894736281150471768342,   /* n =  67 */
    ( real_type )+14.315789473684208843451415305026,   /* n =  68 */
    ( real_type )+14.52631578947368318210919824196,    /* n =  69 */
    ( real_type )+14.736842105263157520766981178895,   /* n =  70 */
    ( real_type )+14.947368421052630083067924715579,   /* n =  71 */
    ( real_type )+15.157894736842104421725707652513,   /* n =  72 */
    ( real_type )+15.368421052631578760383490589447,   /* n =  73 */
    ( real_type )+15.578947368421051322684434126131,   /* n =  74 */
    ( real_type )+15.789473684210525661342217063066,   /* n =  75 */
    ( real_type )+16.0,                                /* n =  76 */
    ( real_type )+16.210526315789472562300943536684,   /* n =  77 */
    ( real_type )+16.421052631578945124601887073368,   /* n =  78 */
    ( real_type )+16.631578947368421239616509410553,   /* n =  79 */
    ( real_type )+16.842105263157893801917452947237,   /* n =  80 */
    ( real_type )+17.052631578947366364218396483921,   /* n =  81 */
    ( real_type )+17.263157894736842479233018821105,   /* n =  82 */
    ( real_type )+17.473684210526315041533962357789,   /* n =  83 */
    ( real_type )+17.684210526315787603834905894473,   /* n =  84 */
    ( real_type )+17.894736842105263718849528231658,   /* n =  85 */
    ( real_type )+18.105263157894736281150471768342,   /* n =  86 */
    ( real_type )+18.315789473684208843451415305026,   /* n =  87 */
    ( real_type )+18.526315789473684958466037642211,   /* n =  88 */
    ( real_type )+18.736842105263157520766981178895,   /* n =  89 */
    ( real_type )+18.947368421052630083067924715579,   /* n =  90 */
    ( real_type )+19.157894736842102645368868252262,   /* n =  91 */
    ( real_type )+19.368421052631578760383490589447,   /* n =  92 */
    ( real_type )+19.578947368421051322684434126131,   /* n =  93 */
    ( real_type )+19.789473684210523884985377662815,   /* n =  94 */
    ( real_type )+20.0,                                /* n =  95 */
};

real_type const CERRF_DAWSON_FZ_XN_0[ CERRF_DAWSON_N_XN ] = {
    ( real_type )+0.0,                                 /* n =   0 */
    ( real_type )+0.20441467642329930785220573813364,  /* n =   1 */
    ( real_type )+0.37464539106214656579290313815167,  /* n =   2 */
    ( real_type )+0.48762077952615903260008506595599,  /* n =   3 */
    ( real_type )+0.53722517966538365699947104498489,  /* n =   4 */
    ( real_type )+0.53284420923280044251209395730367,  /* n =   5 */
    ( real_type )+0.49264160390503654761220859402073,  /* n =   6 */
    ( real_type )+0.43573808885380492935587004714005,  /* n =   7 */
    ( real_type )+0.37679023586940362782529848142144,  /* n =   8 */
    ( real_type )+0.32417366240852333435184868323245,  /* n =   9 */
    ( real_type )+0.28091984293386913151428698183339,  /* n =  10 */
    ( real_type )+0.24677460673890200598119659424562,  /* n =  11 */
    ( real_type )+0.22009114223089846120666843727015,  /* n =  12 */
    ( real_type )+0.19901899523829794821540303219113,  /* n =  13 */
    ( real_type )+0.18202256320459304126277648063622,  /* n =  14 */
    ( real_type )+0.16798629674465919700501587215986,  /* n =  15 */
    ( real_type )+0.15614536800292368169373053641861,  /* n =  16 */
    ( real_type )+0.14598086940844469807270194412764,  /* n =  17 */
    ( real_type )+0.13713391418893704081595586374072,  /* n =  18 */
    ( real_type )+0.12934800123600511559147052625767,  /* n =  19 */
    ( real_type )+0.12243340167638945979473309042399,  /* n =  20 */
    ( real_type )+0.11624553653603577023094381964614,  /* n =  21 */
    ( real_type )+0.11067155975896599839267205651452,  /* n =  22 */
    ( real_type )+0.10562169336423022818804007080043,  /* n =  23 */
    ( real_type )+0.10102339086405869633311155706155,  /* n =  24 */
    ( real_type )+0.096817259970873109613478610873863, /* n =  25 */
    ( real_type )+0.092954129676277418258634266415077, /* n =  26 */
    ( real_type )+0.08939289048860964819564613706182,  /* n =  27 */
    ( real_type )+0.086098873132516493460371859950336, /* n =  28 */
    ( real_type )+0.083042611524151176870260116792922, /* n =  29 */
    ( real_type )+0.080198885578181547604814806338922, /* n =  30 */
    ( real_type )+0.077545971321221856828764234900494, /* n =  31 */
    ( real_type )+0.075065046896665559389168281079016, /* n =  32 */
    ( real_type )+0.072739717357947467121648174137541, /* n =  33 */
    ( real_type )+0.070555631055295055197498789697067, /* n =  34 */
    ( real_type )+0.068500167405515477137939676640344, /* n =  35 */
    ( real_type )+0.066562180837133088202068951713954, /* n =  36 */
    ( real_type )+0.064731789337995548319934783621747, /* n =  37 */
    ( real_type )+0.063000198707553387919245729516967, /* n =  38 */
    ( real_type )+0.061359555607928556173875408870685, /* n =  39 */
    ( real_type )+0.059802824007097002599716806955238, /* n =  40 */
    ( real_type )+0.058323680747006979215164017110813, /* n =  41 */
    ( real_type )+0.056916426843506876837940629331046, /* n =  42 */
    ( real_type )+0.055575911801060267884513776925596, /* n =  43 */
    ( real_type )+0.054297468752385907695410548153628, /* n =  44 */
    ( real_type )+0.053076858647133428358123471974675, /* n =  45 */
    ( real_type )+0.051910222041179244310098015438475, /* n =  46 */
    ( real_type )+0.050794037298704905184242750197703, /* n =  47 */
    ( real_type )+0.049725084227974962162112538308379, /* n =  48 */
    ( real_type )+0.048700412339829677166350863392234, /* n =  49 */
    ( real_type )+0.04771731305406125120100771093429,  /* n =  50 */
    ( real_type )+0.046773295289697525604789830375489, /* n =  51 */
    ( real_type )+0.045866063965868140976115308273045, /* n =  52 */
    ( real_type )+0.044993501014460917008154483409071, /* n =  53 */
    ( real_type )+0.044153648567289994491687137251774, /* n =  54 */
    ( real_type )+0.04334469403149053358989657593368,  /* n =  55 */
    ( real_type )+0.042564956809319422721604668066478, /* n =  56 */
    ( real_type )+0.041812876453988260317929117588809, /* n =  57 */
    ( real_type )+0.04108700208293198362993726325429,  /* n =  58 */
    ( real_type )+0.040385982894919183194249326844771, /* n =  59 */
    ( real_type )+0.039708559658574038649657796138204, /* n =  60 */
    ( real_type )+0.039053557057798635529280142923707, /* n =  61 */
    ( real_type )+0.038419876794774614652923377940805, /* n =  62 */
    ( real_type )+0.037806491364243163245270451029547, /* n =  63 */
    ( real_type )+0.037212438423822762346947608294314, /* n =  64 */
    ( real_type )+0.036636815694650440692563217517499, /* n =  65 */
    ( real_type )+0.036078776334804115545674579641042, /* n =  66 */
    ( real_type )+0.035537524735014035698607529922459, /* n =  67 */
    ( real_type )+0.035012312692246946910115438632162, /* n =  68 */
    ( real_type )+0.034502435922029356494619763963763, /* n =  69 */
    ( real_type )+0.034007230874950443082766319399504, /* n =  70 */
    ( real_type )+0.03352607182676484482438846033294,  /* n =  71 */
    ( real_type )+0.033058368214980795993375101698924, /* n =  72 */
    ( real_type )+0.032603562197868881852713857794533, /* n =  73 */
    ( real_type )+0.032161126414470307789361137738387, /* n =  74 */
    ( real_type )+0.03173056192651008156605002634627,  /* n =  75 */
    ( real_type )+0.031311396325184611783553351952309, /* n =  76 */
    ( real_type )+0.03090318198758078331855979509403,  /* n =  77 */
    ( real_type )+0.03050549446908896219357309578125,  /* n =  78 */
    ( real_type )+0.030117931019557054260824339522332, /* n =  79 */
    ( real_type )+0.029740109212212645037011539517855, /* n =  80 */
    ( real_type )+0.029371665675448908836595910531007, /* n =  81 */
    ( real_type )+0.029012254918562620423246003884763, /* n =  82 */
    ( real_type )+0.028661548243434770656173998517326, /* n =  83 */
    ( real_type )+0.028319232734848067795097432772015, /* n =  84 */
    ( real_type )+0.027985010322930036021874610632234, /* n =  85 */
    ( real_type )+0.02765859691173434825061506903126,  /* n =  86 */
    ( real_type )+0.027339721568593548003512587274909, /* n =  87 */
    ( real_type )+0.027028125769331915162333782393284, /* n =  88 */
    ( real_type )+0.026723562694908736328147463261245, /* n =  89 */
    ( real_type )+0.026425796575435644735625484197408, /* n =  90 */
    ( real_type )+0.026134602077874387404866801092746, /* n =  91 */
    ( real_type )+0.025849763734065242945572925620967, /* n =  92 */
    ( real_type )+0.025571075406019297908377800027531, /* n =  93 */
    ( real_type )+0.025298339785651370912122576143504, /* n =  94 */
    ( real_type )+0.025031367926403671946994952347824, /* n =  95 */
};
