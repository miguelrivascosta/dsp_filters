int dataSize = 1000;
double data[1000]= {
0.04674761077779611,
0.5921581085435984,
-0.17360587376832984,
0.40753846484489153,
0.2657678630820744,
-0.526292559410606,
-0.28596740448548563,
-0.021439421508511816,
0.27354890724295033,
0.2245107493424579,
0.4030237077661796,
-0.06673284047223152,
0.538897751675712,
0.2088896363007734,
0.6598295349682076,
0.27267082469617343,
0.29413893154149195,
0.11782622649873381,
0.3446380625718599,
0.3946827564276014,
0.06798686865835896,
0.3815360691846725,
0.214162031604871,
0.5799462553805617,
0.14169875561355927,
1.004662836170218,
0.8666022583591595,
0.4703476144229277,
0.8036860953139667,
0.5943121728195453,
0.8911503311092724,
0.20822795692689228,
-0.012094046412521764,
0.5987840404207818,
0.3305484466901894,
1.177492902283551,
0.1610555777356657,
0.03776726442671918,
0.7076962441710166,
0.23128909304056133,
0.7488874112262693,
0.8677592220268737,
0.25461877344243533,
0.4993871636479446,
-0.0883658410816619,
0.11982920628467103,
0.06968473495780753,
0.2694872219497628,
0.3320647537407275,
1.127663891760972,
0.7926926734730185,
0.7953365958564261,
0.566798325617467,
0.6837074653146787,
1.0090960628900147,
0.5877302831642864,
0.8656301159431607,
1.4109412801057797,
1.161503781321533,
0.9409515769787813,
0.732432755831275,
0.7454565941096144,
0.3573187930191928,
1.0026713464699109,
0.404560664896555,
1.1337342442586702,
0.6026489484374667,
0.33326837483751254,
0.705403110465112,
0.42382491804147526,
0.6294552850140396,
1.1770816795814567,
1.2274711344501958,
0.9695340319395382,
0.5637812907369362,
0.9827010249544431,
0.9060797426315264,
1.086767095921699,
1.1027061153769866,
0.8236370939239214,
1.02972546324622,
0.4252090293253524,
1.341659571578475,
0.6202935234571373,
0.3994326596221303,
0.9158734935343567,
1.3637216647989754,
1.085757150577854,
1.0535145278001972,
0.47454412009199975,
0.3724500150977984,
0.5027969032073901,
0.9822653997003926,
0.36193807912912324,
0.5936519333444936,
1.2991830285666064,
0.9604796931849128,
0.9803411498891107,
0.8138755621276913,
0.29281948632049926,
0.4995155686474035,
1.1501062397000967,
0.7144845394741287,
0.1201342331175086,
1.5809365962583581,
0.6955410283828424,
1.0866278211134697,
0.7169564494961935,
1.0702334785716778,
1.395059739726977,
1.4526069035222842,
1.2766599696823688,
1.3057454106186204,
0.6376324357934131,
1.030016761809906,
1.053347367160919,
1.2686878145560867,
1.1896610922047042,
1.147014595312148,
1.042234732040311,
0.9855256247496161,
1.2733787206058527,
1.5769449433837737,
1.3667860561926208,
0.9209939694652504,
0.9025525727814405,
0.7165049019793095,
1.1948127262314716,
0.7331128701245124,
0.770283785325687,
1.171845291826393,
0.9924994977515101,
1.382112099572813,
1.3279994471108794,
0.7837670826904888,
0.9251943325026346,
1.6449477721099184,
0.8930418943090999,
0.9994437390212731,
0.9674753601705793,
1.1139684792743143,
0.9103309277430994,
0.8446561639297944,
1.3169166616543662,
1.0099006681453846,
1.5778331514347825,
0.5346961729537878,
0.9894266276724853,
0.73099146979981,
1.1703581559712344,
0.2596506988120699,
0.7499858433894093,
1.1627148893012922,
0.7590354051264101,
1.28150394758217,
1.2355991390071375,
0.6471667020732194,
0.8410869645966538,
1.410693636329892,
0.8396271298005152,
1.0317545138019102,
0.6056266853845604,
0.20771431339594293,
0.4500559785885903,
0.7321944494716695,
1.3411352824151845,
1.131157443829502,
0.9037297160903143,
0.6252413511252123,
1.24994289747432,
1.1088510499613706,
0.3205433513096253,
0.286553757629026,
1.505443763175793,
0.5666586049798293,
0.942036780498191,
1.4328429491688857,
0.8406232961416517,
0.7732643596062048,
1.865560673746788,
1.1033356024114354,
0.8647056102520412,
-0.28154299136671,
0.369747887469371,
0.9068714643396685,
0.6938903343384974,
0.27113534498902064,
1.0186457916335443,
0.6857692202467494,
0.7049393690467765,
1.2085477014998038,
0.8178764094902592,
0.9099839090326063,
0.4122881126300277,
0.565524894693799,
0.28490074317378494,
0.6999689441744803,
0.5461917169999393,
0.5661634019866,
0.7441242961844858,
0.1264161875020831,
0.4821330611672051,
0.5661608783791738,
0.7018765275411948,
0.8440294512524396,
0.617636057525626,
0.4332720472712458,
0.9249281779903843,
0.5108531144618912,
-0.37892971523713154,
0.7352712017883831,
0.13236995939835844,
0.6166215768260426,
0.8328510600865755,
0.5043730610912782,
0.765287923750871,
0.780121652051809,
0.27959719991251775,
0.7996640400713375,
0.5683274035334043,
0.49196031405828555,
0.39189377349830107,
0.6893732281273497,
-0.22206104303926294,
0.5036205414809,
0.26764502890134373,
0.38297274371681495,
0.3257248024725158,
0.2501777738144053,
0.005481950296855664,
0.4118349327794787,
0.4823142516710897,
0.12622404335913812,
0.33832801608491303,
0.1283901890954568,
0.8579734878475651,
0.26807569197339975,
0.515591715546356,
-0.2000640041685296,
0.47281701005964416,
0.09142332594006355,
-0.20784495908109818,
0.5184202272377154,
0.4161863330183927,
-0.5977175054687885,
0.29848857206918683,
-0.33801939447169854,
-0.10350399492284759,
-0.3331420978177488,
-0.937630424760035,
-0.43256484849561616,
-0.07427014916529061,
-0.257340554564729,
0.18395140305751811,
-0.28478599966430324,
-0.26108402901349187,
0.5070481461698064,
-0.3892379570803014,
-0.1480630269268596,
-0.160596483313509,
-0.4450335489587187,
0.03012787657127486,
-0.3068032793521336,
-0.5811054725112265,
-0.18922552583804875,
-0.32443084101631114,
-0.2482359206320583,
-0.056251995970122176,
-0.4509484217807057,
-0.8512957555784859,
0.27861889627584463,
0.10713606344170079,
-0.3676920939073936,
-0.31944600874507795,
-0.2732297433281183,
-0.18688430880953102,
-0.5829287592508628,
-0.1840785873650517,
-0.1295855719362587,
0.47051482442126236,
-0.12839481934876013,
-0.6667515822807792,
-0.5333027947336622,
-0.4871753990824726,
-0.3673037913295171,
-0.3145295305129825,
-0.4312191224831451,
-0.5394941413296592,
-0.22320316326311074,
-0.4645796750534705,
-0.2459115627190468,
-0.6601330454506318,
-0.7155529245204012,
-0.7979525799265057,
0.05144398518452553,
-0.7530148648079356,
-0.8275560305468732,
-0.8365309547132809,
-0.9328180397540043,
-1.2249194890273758,
-0.5826219452534847,
-0.6855800865726097,
-1.0258721191754763,
-0.6622513713880629,
-1.0090039503090549,
-0.6960327751377638,
-0.6808831009851083,
-0.8383743861768671,
-0.7364162399400747,
-0.6829915133548395,
-1.3156603569834382,
-0.6514493712154111,
-0.605953669054394,
-0.6081226280609577,
-0.8623106708097485,
-0.7668285154143198,
-0.23791673703142568,
-0.43190099785149133,
-1.071471283252654,
-0.41635276801773874,
-1.1334031703031286,
-0.8164302764245306,
-0.6336280000877879,
-0.8891937530500013,
-0.7649764544575006,
-0.7320054454334823,
-1.1337829097494923,
-0.9428702517338661,
-0.8241536348759555,
-1.7757565594671676,
-0.8237409609256138,
-0.953880976540892,
-1.097803037390466,
-0.8370207682228533,
-0.3319217481242487,
-1.0888348743798557,
-0.7021709612088811,
-0.36567922876640646,
-1.5023510227973274,
-0.9860163157621165,
-0.6889160056644545,
-0.2591221021721123,
-0.609743443773934,
-0.9614201114555045,
-0.7389098864399974,
-0.12216368516898346,
-1.3333457079908628,
-0.7027726262535444,
-1.1179673429370067,
-1.2520598823444709,
-1.6592788818141613,
-1.2900666000036367,
-0.5627635085291256,
-0.7502334689906254,
-0.4710364386284725,
-0.9706996521866601,
-0.8670297582272002,
-0.8722250400789461,
-1.122436255846864,
-1.2461976337499199,
-1.2632211470574581,
-1.2575846081197752,
-0.8457729611400022,
-1.5104456192852853,
-1.00715798444742,
-1.2111470307940853,
-1.3972664764944784,
-1.175282657651101,
-0.9833189642749807,
-1.0460814251828279,
-1.1973297053563874,
-0.6555440377007695,
-0.899144486040984,
-1.8456209967861599,
-0.9971608385211399,
-1.4269746731965272,
-0.3830634953525104,
-0.9557665844371159,
-1.1635021325640396,
-1.4247485764738002,
-0.5818526385462498,
-0.9734889136290594,
-0.7657496748601924,
-1.469080311192574,
-0.7920642018009358,
-1.4744670618009563,
-0.8366280123609813,
-0.1801888068827585,
-1.0979900210952778,
-1.0470068798014365,
-0.7969377014276523,
-1.0483255263482594,
-1.2768323897430807,
-1.020002525065557,
-0.5989453066379025,
-0.8753736454337632,
-1.197548075961494,
-0.5992341590692534,
-1.0844277455339562,
-0.7776988372496221,
-1.1120485520764585,
-0.9971720347621307,
-1.2040227159768457,
-0.7071205460142858,
-0.8218174621347818,
-0.287538628955759,
-0.6270638406801551,
-1.5060010445576362,
-1.1019233935589856,
-0.9003226605897814,
-1.0300726502869,
-0.7486658248455159,
-1.0769238348713879,
-1.2446094888205357,
-0.9648370339384165,
-0.5136885051959169,
-0.47223328299686973,
-0.6374648964944079,
-1.5825301387674635,
-0.979862214625917,
-0.7168106776935255,
-0.7555796984360417,
-0.4941911871336782,
-0.9323071648424096,
-0.9292426803155363,
-0.49888602467341897,
-0.34325692102791155,
-0.8835322945961201,
-0.37887062316742687,
-0.5244715346901035,
-0.80966544042413,
-0.7567837933713462,
-1.084347025091315,
-0.30687192880531605,
-0.755268955255364,
-0.9013059956956433,
-0.45017554112510927,
-0.5814621859708775,
-1.2317826832171714,
-0.9394249923888899,
-1.0050557424770226,
-0.524500255606728,
-0.4971225587348262,
-0.5466386400396316,
-0.32326221138814487,
-1.3210906896663888,
-0.8045103820659871,
-0.4500551605685345,
-0.8606602165365114,
-0.11628489015638527,
-0.40378425167558296,
-0.3626744336769322,
-0.8293888180349168,
-0.4098661086321169,
-0.554782677713426,
-0.00420096826223515,
-0.6096459715128877,
-0.7395404310755723,
-0.9874278214838885,
-0.5331075709066686,
-0.46911709071645763,
-0.8887483824698241,
-0.28488363840047004,
-0.28951254549876393,
-0.23360415751815986,
-0.026026069268766494,
-0.46342203543779303,
0.17244922173011096,
0.21627454869371449,
-0.5203391352516671,
-0.3418745931323819,
-0.7116761692388393,
-0.6323915373225077,
0.31869958030503254,
-0.14857372767929644,
-0.1826859196692774,
-0.11665441313648284,
0.0670521935445369,
-0.2670507430187097,
-0.0591440869182078,
-0.8460134723723864,
-0.057989397910069324,
-0.5310012794535987,
-0.439039763775059,
-0.1156416052996988,
-0.3368531829893987,
-0.30843623692025646,
0.4649624620784457,
0.28610454166103644,
-0.2104816073236031,
-0.2938308556696881,
0.16302469569843642,
-0.12064715174287217,
-0.31356509885082817,
0.10613430749379829,
0.3341692928066792,
-0.20996573376003308,
-0.17148175534213708,
-0.10272816922770214,
0.11484906927569309,
-0.5076479188748033,
0.3639503465652841,
-0.007582816604639355,
0.4218320954324614,
0.44567472903366356,
-0.12550790438100365,
0.2774168304210307,
0.1464770783217209,
0.15600997436311906,
0.01905039803166947,
0.037759447971397964,
-0.1625871479377738,
0.656953336298994,
0.2140912453275653,
0.31862799268451014,
-0.1794265966658129,
1.1107045166432854,
0.991727762105688,
0.3290853529901365,
-0.034041161143996856,
0.4186963489824096,
0.4262315631258976,
0.38914879645128525,
-0.0046232532879222354,
0.009658429406798286,
0.7908182665356118,
0.6400447258438278,
0.5704933109348359,
-0.11096587721615286,
0.46458697377906666,
-0.008767599461652953,
0.6617136893862343,
0.5573322571459249,
0.6706402781490206,
0.3232362729634682,
0.052818553105920485,
0.15924025639777944,
0.26263253634468775,
0.27170523738621666,
0.11000894579582332,
1.0936188344894369,
0.1792581944346136,
0.4553640316774546,
0.6220447330711282,
0.7998284962825182,
0.3813184187898425,
0.9705205652324116,
-0.17201032799489402,
0.24097023456203642,
-0.003888677220827641,
0.5252130878591323,
0.23897616292369867,
0.43022357072408735,
0.7976444682169586,
0.5465954535123145,
0.3477137827899798,
0.5055883425229973,
0.9206438115584732,
0.5969939259783051,
0.34321057653831555,
0.6460527312344012,
0.7303034152187273,
0.06922643460212641,
0.8743429903100262,
0.48661807141058633,
0.6328868105204429,
0.7000920511877295,
0.6312937787800252,
0.5320784191348426,
1.1624423678620053,
0.6749084418610958,
0.48532057105521637,
0.9813254341214732,
1.192552476433198,
0.5491455125932201,
1.1562534441995498,
1.110397952381301,
1.1048690610126486,
1.1536503018239805,
0.2710032216439583,
0.6409150258725117,
0.6894207416314553,
0.6181956203328787,
0.14963467774005923,
1.5374388621430968,
1.0727524624181421,
0.7155991455205745,
1.0742162198254752,
1.071764571774638,
1.0326575639206663,
1.388963446432161,
0.9122193720810516,
0.9533938093305223,
1.1598165145801076,
0.8740786755890952,
0.903480730769203,
1.1117479726585933,
1.4549406295731655,
0.8382499891185229,
1.4473059396580652,
1.0022551877118402,
1.516253158768872,
0.718323976750333,
1.2259461460443037,
0.5709992019908039,
0.9554813610053297,
0.6674092434024129,
0.36731229111761843,
1.1845741783050545,
1.2469762190297864,
1.0958754722728086,
0.9094887960286433,
0.9273258263040705,
1.0200254990472668,
1.1075353414287208,
0.7880185253570574,
1.0144593176876888,
0.8235855604100046,
1.183086315338386,
1.3493501214770478,
0.6732381873389943,
1.1329712232532827,
0.6371379288643604,
1.1896445379570721,
0.5277779693450145,
0.5482621893918449,
0.11357105592434191,
0.4384886786437122,
1.42709096489496,
0.8212423606838463,
1.3249102582840862,
0.5816391604545899,
1.0820036068418035,
1.177699610694817,
0.4181225377034602,
1.2756712338845122,
0.8294716582438666,
1.9358755083093944,
1.103551809499158,
0.6295628289321449,
0.6562745185972725,
-0.03071334189102848,
0.6629100397827508,
1.051921270509265,
1.61533717587491,
0.8322757327305311,
0.6468630598581506,
1.3314450428017686,
0.7677436504766793,
0.6125973536314567,
0.7130407385678781,
1.1130143959156942,
0.7148050811733584,
1.113012445962085,
1.2644427208158966,
1.0121397148369435,
0.8784648782121613,
1.1573357799173827,
0.6195467706340909,
1.2860685094666737,
0.5213738972557547,
0.6191922583332845,
0.6638956892260688,
0.9805810229531048,
0.7097361435157481,
0.734185569091222,
1.079002744894881,
0.5053955056787713,
1.6318581685608762,
0.9252081726488676,
0.4792618103588004,
0.8783476240027623,
0.847575825879069,
0.5802238617779517,
1.147814155597958,
0.9441166901956926,
0.49048806511257337,
0.5284766936641188,
1.0358488631283984,
0.6665561178314676,
0.5439629000172727,
1.1087690877456176,
0.9108580414861639,
0.6622566823926188,
0.6814864535640787,
0.7507418917804624,
0.9525494310263949,
0.690794334952102,
0.2909272793086917,
0.9961001326979284,
1.0296993909592491,
0.5886284344261936,
1.1008634884083492,
1.0402685790533759,
0.49017027677707925,
0.3891057251150011,
0.707620842438573,
0.9010103771945799,
0.10507370081365619,
0.9672527404082883,
0.1197040358775166,
0.4116177206736993,
0.2543875221710968,
0.6224720107740214,
0.44488369664886884,
0.7646954644080561,
0.3587804740609726,
0.4478678387293299,
0.39960374602497206,
1.1026760467837744,
0.39302343691707353,
0.06458692551854478,
0.04534319855593949,
0.3442342109855241,
0.46109365393285445,
0.2911933904361146,
0.11829670367856598,
0.3750536753377222,
0.3117909552306662,
0.4383269427801329,
0.9431294897859692,
0.8144018027801889,
0.18084375245434728,
0.1691935041559673,
0.610508269094544,
0.1785479223643632,
-0.04893376949432637,
-0.08551922076386204,
-0.04094759746194182,
0.18222092430930437,
0.6212197750375812,
0.5656458558387762,
0.2224024250519126,
0.23510573685441766,
-0.1463005200651108,
0.2164354074591945,
0.3994724863779523,
0.5667800109464736,
-0.11726183801353127,
0.24107875213715818,
0.6984490898016796,
0.0070680473961248075,
0.5052774969883999,
-0.013278486704613249,
-0.07239339386591548,
0.1029816096168932,
-0.35366568196378423,
-0.01014079784572941,
-0.2974414834543763,
-0.020106981663994293,
0.1115532158235894,
-0.14603624341490362,
0.043711780077608474,
0.04916812852871925,
0.21943346403134745,
0.17763061519921924,
-0.5553105027334946,
0.6023020416278366,
-0.03241053288745291,
-0.46429890063491464,
0.04492951887841795,
-0.3080602299130175,
-0.2543362398980757,
0.11380170965976397,
0.09412775824149341,
0.019585503881356853,
-0.9731657088598614,
-0.40227611833804844,
-0.7379408197111264,
-0.38404215713107837,
-0.16069495582026866,
-0.2628877205454074,
-0.705702304892037,
0.1038651020690558,
-0.4059944296994139,
-0.5058077123310643,
-0.26692784235102746,
-0.5430498993399626,
-0.448617005713947,
-0.010108697661610933,
0.23532682593599508,
0.04974718339651568,
-0.039041493757358825,
-0.2924844707627551,
-0.42870235535639867,
-0.44040228227611555,
-0.7514315886418684,
-0.611833015197188,
-0.3381768563293384,
-0.2630388967736609,
-0.9064618116033393,
-0.8226986340052376,
-0.5293133356725421,
-0.34304981646617627,
-0.8769318295882135,
-0.4096379355230113,
-0.4867734407529878,
-0.25955874414981106,
-0.1383217422217704,
-0.7409547337027941,
-0.5424675566137106,
-0.7378675477619034,
-0.6833258347827577,
-0.6151510092149481,
-1.0831587351871224,
-0.9738700253009234,
-0.3822542360382826,
-0.509865400075917,
-0.4136009423848601,
-0.42276614805971224,
-0.7233364854453876,
-1.0252213222923983,
-0.7327458642619971,
-0.7517499046181912,
-0.72405573155209,
-1.1589453636873475,
-0.5852151082471776,
-0.6519687446687017,
-1.3597655032385343,
-0.4879090662275619,
-1.21526093972643,
-1.249440561924631,
-0.6383302174350975,
-1.2237539770708339,
-0.44475506913807294,
-1.0974517668541257,
-0.9868254022733958,
-1.1525630086349947,
-1.0685914799257825,
-0.27134999082612266,
-0.24146504323925477,
-0.774060371881628,
-0.8355049400948305,
-0.3735512047568909,
-0.438307195666103,
-0.09143976034956425,
-0.7067645057899177,
-0.9379032834621682,
-0.9306940849824146,
-1.4056922589439642,
-0.5232531527503577,
-0.6710807454354297,
-0.577951934748296,
-0.5940521353962631,
-1.1480318262847788,
-1.0135113996306453,
-1.2750539508556098,
-0.8443228127864432,
-1.1983407345392458,
-1.1614433831626596,
-0.8150521927659762,
-0.8443200622200093,
-1.3571921671651035,
-0.8499497008019173,
-0.8545664977200171,
-0.8840991332847064,
-0.7080791780224809,
-0.832837300534743,
-1.340874221133359,
-1.0615581191163463,
-1.3964483132107424,
-0.44667924257998304,
-0.7894601061970867,
-1.0542247127992088,
-1.683875449979717,
-1.3664801007053082,
-0.5739618773805806,
-0.8109416472762151,
-1.2709410647502206,
-1.5116789817336942,
-0.8503649251914125,
-1.1863677598745572,
-0.7996347128982152,
-1.2378036998323518,
-1.3373748205737144,
-0.9389736768560735,
-0.7887918652775004,
-0.8808725444296936,
-1.326471940176888,
-1.238561572596809,
-0.8695991249545969,
-0.737866931758045,
-1.071812904694811,
-0.736584720585409,
-1.3324407287555222,
-1.191860693293315,
-1.1182391680902108,
-1.3455096630398347,
-0.8145288301939951,
-1.2731665051911598,
-0.3862238163064652,
-1.5778042460005084,
-1.3742281964860985,
-0.7600528034102018,
-1.1787478246620855,
-0.9217798518012744,
-0.8757310513160992,
-0.6216532294289414,
-1.1602324204414378,
-0.6431057898846528,
-0.31505472226997766,
-0.7343576801053137,
-0.9319740255171006,
-1.314667313275378,
-1.342604133083597,
-0.539187022281314,
-1.1639060627618587,
-1.0215360460449092,
-0.6406621823419343,
-0.9470392910797065,
-1.1369614740342853,
-1.2296579031248969,
-0.6777380784894994,
-0.6836153303715301,
-0.7331408205158434,
-1.2398728329418072,
-1.1936133320321676,
-0.6074961603724933,
-1.3522149124116551,
-1.155335265013938,
-0.18999281380652477,
-1.2590004457426016,
-0.5555067588473886,
-1.1988635537331986,
-1.0967216925691936,
-0.604591188387199,
-1.038920535034754,
-0.6190813531304271,
-1.1766162592257676,
-0.9272787808714021,
-1.0251829828328518,
-0.7171058313800422,
-0.8131211606897956,
-0.2735075865122283,
-0.8895933625018689,
-0.6640599095539437,
-0.3998240445656347,
-0.8462671237469256,
-0.5435216320011107,
-0.5397185906894569,
-0.4929580196706636,
-0.5182321745996763,
-0.5749034377818756,
-0.33227924718077434,
-0.7933769229294323,
-0.11723263568441444,
-0.32136216861815264,
-0.9614534394269587,
-1.038931502008209,
-0.5841218012767238,
-0.7226499391023348,
-0.8520697209953426,
-0.6169998471059328,
-0.555489159397472,
-0.6942305118070823,
-0.7994797266440091,
-0.6300736235691895,
-0.47641322902186733,
-1.0880534113284004,
-0.06891359616290205,
-0.5902387815401661,
-0.4304400923679561,
-0.15279266760969862,
-0.5461959106938474,
-1.0402132983925798,
-0.7884285525443403,
-0.5772043017324797,
-0.34270629568986355,
-0.6860810257391623,
-0.2911179179541633,
-0.4199637115228537,
-0.1311530617894216,
-0.47558572564822355,
-0.5752019683709889,
0.11375231285849113,
-0.16982598091456338,
0.09509787437407419,
-0.3688293283640448,
-0.5886904048395007,
-0.02295768849243457,
-0.1397117263455479,
-0.1471207291637031,
-0.30946299806836136,
0.27253410058641814,
-0.2446634343772767,
0.029530316275463625,
-0.4797239191038586,
0.14273450578029268,
-0.4130451697595525,
0.23213335281359054,
0.36323784696160555,
0.17057190114154488,
0.1982450672762406,
0.1635764318149282,
-0.2737803439072773,
-0.025583163789495322,
-0.24513180440724558,
0.02376719002425988,
-0.17880860140553362,
-0.423590038137144,
};