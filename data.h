int dataSize = 1000;
double data[1000]= {
0.023631386915706033,
0.1588816784945977,
-0.03460518305401586,
0.11855831563237296,
0.3162470686865454,
0.12746252797451563,
-0.20917411930324672,
-0.008446149725820529,
-0.16345048796829906,
0.29950444472008286,
0.6454716739980627,
-0.19813105537407966,
0.47694022650666684,
-0.15646264350220548,
-0.08247145058805255,
-0.08908231335213385,
0.4686515963039429,
0.06993591984895553,
0.3486737872318331,
0.6639740247463174,
0.06395781753321947,
0.08425053098197788,
0.2658638512400119,
-0.2646677331237529,
0.06472211186374549,
-0.22627418501989288,
0.6600790869074395,
-0.20793110786347452,
0.2701596115485783,
-0.05400027537436586,
0.5811025480761577,
0.4628460133096053,
-0.45435497028758676,
0.6344566173382589,
0.0986760174334142,
0.05828995899354278,
0.6775351840817061,
0.9253383207715775,
0.644915172872342,
0.2648453166305371,
0.7702337212258363,
0.30681757100888896,
0.6862065667744863,
0.20292244968351858,
0.4701946765232047,
0.18679199168613414,
0.5184004327111007,
0.8711879205837485,
0.6722261882036927,
0.5772245238365539,
0.5424591485925304,
0.2173940258350412,
0.31767111446101987,
0.6675751789931589,
0.34582153492518236,
0.7670414117000107,
0.3670293805108795,
0.3251203122032305,
0.7183163168274274,
0.9573373217132191,
0.5905141028381091,
0.2768676520981526,
-0.06386626238333937,
0.501568568738731,
0.6856606458699182,
1.0397846901891217,
0.6550196019693224,
1.0077681901160571,
0.477079459504978,
1.030867406948022,
0.5834515593611301,
1.0881440048417816,
1.104754165667072,
1.0928720971283645,
0.11634257195528952,
0.5565621559363974,
0.2995555099013788,
1.1188343219992904,
1.055348678334715,
0.5519159798434095,
0.3319494740901485,
0.7072336993224252,
0.7564845117907217,
1.1162543598793437,
0.8821044476165523,
1.2222815835202394,
0.7733309228646441,
0.9261116285364004,
0.537327821045022,
0.8982417263823481,
1.226484174874532,
0.5889703934420041,
0.5804230982450435,
1.2728190990080295,
1.1038221093700338,
0.9272023330499525,
1.1864913149828697,
1.1106778262315826,
1.3330406786528055,
0.9534546500429295,
0.7658266665000729,
0.7636841072890718,
0.5594980903661962,
0.6437111181246459,
1.4960691302050952,
1.5022219341926029,
1.2805726606566559,
1.1578744087960953,
0.8215838573337633,
0.8443286343828486,
0.5542486348039316,
0.8318222759966009,
1.5431190346264474,
0.8383924189310656,
0.7297357542841687,
0.8423620918974395,
1.0752744698604035,
0.5557593703421236,
0.7799517179458275,
0.6653142201705289,
1.3717603900614497,
1.2040685182176485,
0.9019493566929645,
0.5886698253705196,
1.2880705683176967,
1.1431167435773886,
0.9684272074342322,
1.2583696430764748,
0.5123370434392087,
0.6312614000466417,
1.1277329503617157,
1.1475522418227388,
0.8042738951794928,
1.2471703855619531,
0.7057258707376648,
0.8296775854966688,
0.8788036579648183,
1.7749643096247603,
1.2460117147941143,
0.8542861902486218,
0.8385650735165389,
0.8966685828331622,
0.6787336853631324,
1.1133984039305342,
0.9550902595032169,
0.9402136055034328,
1.5455383740163788,
1.3934206578850425,
0.693775107650537,
0.98738742373299,
1.3778036107544755,
1.1701970051102653,
0.9607568276613127,
0.9651405456115877,
1.3963012353995654,
0.9609864855539496,
1.2994856577695186,
1.0337978941369927,
1.148176562731876,
0.8969712661335343,
0.8796711669766462,
0.8946061213866694,
0.9213734450303646,
0.7310116445124026,
0.8372984198364768,
0.8675398723979126,
0.49006927506793585,
0.9714477701117277,
1.1334674336429715,
0.6722222733641021,
1.0529129472750296,
1.2153058088596596,
0.9424513774242571,
0.5663499273793029,
0.366565090746724,
0.8762123181213959,
0.4060126493163799,
0.8136760075677982,
0.11451698963736567,
0.3861521482164163,
1.270092744240546,
0.7275491527498588,
1.2428796761664245,
1.029282091240342,
0.3004522118471734,
0.6533698784862367,
0.9382749452451291,
0.9217658847547234,
0.7909986586273815,
1.0699060002887637,
0.39379522055823474,
0.738597496720846,
0.4607001889333654,
0.5554165513609941,
0.8320800344972619,
1.2404705964037874,
0.22914973379084236,
0.9770783108658715,
1.5775766072079547,
0.7813496216560016,
0.4222633888395471,
0.33026529150977757,
0.8671464211168549,
0.8085215371934362,
0.8431494741038714,
0.24219119517515592,
0.33916446441545517,
-0.16430977895338306,
0.5099154750427386,
0.38700290236898227,
-0.11367811233028197,
1.0300475224651755,
0.8026313575067838,
0.7070311946046154,
0.5845292586370594,
0.7216702442542544,
0.23455464958039487,
0.48844323232896464,
0.35628371544964604,
0.16615139116277888,
0.4771061371749789,
0.820628388566573,
0.6493386826957741,
0.4813925193518219,
-0.2509817448369226,
0.2540271040029639,
0.8087913715540587,
0.2950420859092123,
0.08500807225394305,
-0.08733612737352031,
0.23613935105736095,
0.22187724042491494,
0.36223409505453186,
0.08466878504819111,
-0.37490237678610805,
-0.23155338232222653,
0.18343556356216933,
-0.130386165757193,
-0.07221637805409761,
0.1579399965627312,
0.45222437347717287,
0.385067384777733,
-0.6128724145840982,
-0.7052735928881567,
0.10639079681244881,
0.4271192135171039,
0.24027240341135964,
-0.06579083072649067,
-0.3394305908284491,
-0.09971651135552663,
0.14922423728620235,
-0.15487717300414236,
-0.019086798068333827,
-0.3752921730146593,
0.15372740116069483,
0.1193231130349653,
0.10485143844484744,
-0.011143559217955054,
-0.2360049936083515,
-0.03968113578551179,
-0.416069285729341,
0.3236490574728122,
-0.4577688769781676,
-0.4899037954637546,
0.044162929736668466,
0.0743129913555895,
-0.285986098140627,
-0.13473787677995652,
-0.6753673559639353,
-0.5447167159598194,
-0.8650911356322544,
-0.28345773214928455,
-0.20998030911875015,
-0.7232517693835241,
-0.18312693364898153,
-1.1722575145768204,
0.030593469462868728,
-0.6673303106717405,
-0.21247341637820166,
-0.8684614844714669,
-0.12480938992964197,
-0.6158564066448606,
-0.4275525717583505,
-0.41149998652641456,
-0.049983131403718406,
-0.7243643962840408,
-0.3518032737048647,
-0.46388913175395013,
-0.4691575783983888,
-0.28062095834976875,
-0.5860860469630568,
-0.7014285539521612,
-0.2707471511341713,
-1.0150578991170898,
-0.6846266835973158,
-0.22978517503275436,
-0.25758782984473877,
-0.5803898308053206,
-0.6069926089428478,
-0.5492094879021521,
-0.4132721791193068,
-0.42429547175863075,
-0.9193163209393813,
-0.2830332950923277,
-0.3927591356910029,
-0.6668889926396359,
0.1970316434715632,
-1.2434996610594309,
-0.8920312731406252,
-0.8823634080824869,
-1.680567041024079,
-0.5943854473200746,
-0.5605200649058913,
-0.4706639393011242,
-0.5659853623717462,
-0.5701634999891307,
-0.1579541382922247,
-0.3583111311501904,
-0.3843865964741034,
-0.05299230670912147,
-0.8551424025137137,
-0.9878798530926544,
-1.1842409056397043,
-0.9831505691138805,
-0.8695627611628207,
-0.6926679745417549,
-0.49554676764963146,
-0.41433887799746094,
-1.3178809956783748,
-0.7333437143996485,
-0.8000668492433041,
-0.8085106712870985,
-1.014388299398541,
-1.0717191946289821,
-0.818430831513342,
-0.6938362103732912,
-0.604925669797756,
-0.9923717889966832,
-1.220258104085635,
-0.7374671354770617,
-0.09773601164290302,
-1.1546574601088015,
-1.0456099534255916,
-1.0205976549284517,
-0.8569200962892245,
-0.24563814488405245,
-1.1347642701110199,
-0.5923144116854298,
-0.7880064501800963,
-0.8686163284525297,
-0.5292161586963613,
-0.48682943683808466,
-1.281125875938384,
-0.7284007452302821,
-1.4329563339774283,
-1.2168601603723894,
-1.289944833328284,
-1.2907309438406818,
-1.119120454871037,
-0.856910869640894,
-0.759705881660268,
-1.1214779839814615,
-0.8455056141277567,
-1.1089829416568706,
-0.9896939381547516,
-0.6613653764976796,
-0.8816119139272067,
-0.9987256976864773,
-0.9332695266799638,
-1.1735446083763519,
-1.4365912466012472,
-0.9402177382857788,
-0.9833650119517953,
-1.4432448948072953,
-0.7756416767471137,
-0.9975669288190229,
-0.5254947450512172,
-0.7425324589565538,
-1.1187572784333955,
-0.9173962426858822,
-0.7907384038445129,
-1.5294669426143308,
-0.7119364682294672,
-0.7785197277367601,
-0.31001442466351836,
-1.4281545275529957,
-1.2217837723944311,
-1.426316696443827,
-1.3979775040653402,
-1.0702209402780978,
-1.4127762017353576,
-1.7528841528067542,
-1.0199729825115125,
-0.7265622420967577,
-0.6120132430032825,
-0.6968739196936198,
-0.8000964291773415,
-1.7696246435942113,
-0.8577324438407529,
-0.9806564183785809,
-1.1065752741972188,
-0.9735270847825099,
-0.8102080106388154,
-0.6083993531162827,
-0.7276014657109745,
-1.0549429640906458,
-0.7806841721350064,
-0.9690191766953135,
-0.8278562617825477,
-1.2465661176176497,
-0.6574855210404599,
-0.9882152620827503,
-0.8376855885296517,
-0.49986627403259243,
-0.7249681845316618,
-0.13159350391100855,
-0.6447171550462165,
-0.9542909084055217,
-1.0075493193558984,
-0.9917403646379751,
-1.1840896424951122,
-0.9211948628789273,
-1.0230684466727247,
-0.5710295535777754,
-0.7815366305120873,
-0.8066655508705238,
-0.47052676936117943,
-0.7398565356383819,
-1.1185543782280642,
-1.003398835349375,
-0.4503322520519292,
-0.23905563626737547,
-0.632244872487992,
-1.1685661424510936,
-0.8602892120889001,
-1.2429524057154882,
-0.7865241672834797,
-0.9178385802445372,
-0.9368840719089241,
-1.2176367345298567,
-0.619400751867174,
-0.4783415568180923,
-0.9988664123236843,
-0.7913658747728165,
-0.7557180750489578,
-1.0527481134273593,
-0.14700427825456602,
-1.0413918537260667,
-0.28510610829866206,
-0.4504935589139527,
-0.16812784925251506,
-0.6193266974516342,
-0.19052365369359653,
-0.5894350936153909,
-0.3063394457230191,
-0.5107093383711969,
-0.948335565746041,
-0.516949598483314,
-0.8030820095393268,
-0.049220049341486105,
-0.11692589678851417,
-0.26745333033063423,
0.17662754273344072,
-0.7141588707169488,
-0.5107398766383445,
-0.9071699133700759,
-0.7195767386894099,
-0.747553436062743,
-0.33257062519281766,
-0.5805758914795764,
-0.5764690664286034,
-0.7763146427908166,
-0.8109683411468542,
-0.14403440732420345,
-0.009610710760375396,
-1.004435956168378,
-0.6380258645643797,
-0.46459692466022895,
-0.160468725667882,
-0.10998747352958876,
-0.14028124644953133,
-0.007813708936444563,
-0.017902562891581597,
0.02024873027512747,
-0.2971507155826191,
-0.16696091130204396,
0.22371555216284453,
-0.3301634829777607,
-0.2635667938876042,
-0.010471415478095047,
-0.13456836931613445,
-0.2698305652715622,
-0.3077532062381232,
-0.18144539298503795,
-0.5735857979122203,
-0.224683625422469,
-0.8124581371406683,
-0.14429957708587668,
0.8845476907018553,
-0.12381383030112561,
-0.29639776093807885,
0.320334526419027,
0.16269830527408286,
-0.01667415972110963,
-0.31036961104405036,
0.005873926065605169,
-0.46592688413041117,
0.7522870190170367,
-0.17996394777139352,
-0.09165993330569436,
-0.20306288043392826,
0.3820245763904483,
0.28998570361827397,
-0.3564790157853547,
0.06918458859368899,
0.20866157087170942,
-0.5268196031086546,
0.50659643874227,
0.15812214090576138,
0.08897515507168333,
0.01304326261136679,
0.18626266925590254,
0.6067810319937839,
0.7063505615015234,
0.11480110659636078,
-0.16141122708256617,
-0.10116399991305786,
-0.03514004650003277,
0.6758401871256204,
0.12818766660714384,
0.9251878782066336,
0.7932300423048528,
0.8440078464586647,
0.8472524377649271,
0.36381978753486294,
0.7150420289164141,
0.4113556031381693,
0.5310682123459731,
0.36922051315322396,
0.5757261336513653,
0.19897604331543772,
0.44223389809375035,
-0.08976904367732474,
0.48123211615124195,
-0.11471540723793894,
0.3810729605577076,
0.3488090329483948,
-0.2894833610151545,
0.827791645656728,
0.6449555254793664,
0.4665680253433647,
1.0862520435049399,
0.4474827102246605,
0.7715134023326418,
0.699035844897256,
1.0074045022730478,
0.567449441368299,
0.39337108636469353,
1.3853236211115416,
0.43799472430527786,
0.6717321578006319,
0.1127050876757667,
0.7143903536024965,
0.40739469090148117,
0.014859528082828755,
1.322927029824986,
0.5698064285687092,
0.6901986779417885,
0.9151164058926297,
1.0826232890860634,
0.6462424038995604,
0.5936618372975557,
0.9401652768965886,
0.029475682620983545,
0.45811362360455216,
0.9093066481486985,
0.8043846957118643,
0.6324916526714085,
0.637714724303454,
0.8726495650589311,
0.297609146976459,
1.185718454352239,
0.5238035248262866,
-0.0029141825441864055,
0.9800581279478492,
0.25198503114286497,
1.2241483879951094,
1.2058000267884903,
0.9627763674310315,
0.9635374875053406,
0.9960250568221931,
0.5469042463668682,
0.5920061160073137,
1.1764071473615674,
1.0866483705346561,
1.0592206157193667,
1.4361866723240326,
0.8213023372535893,
1.1148036053240336,
1.3895918672257177,
1.3217808920138734,
0.41049802305324834,
1.4029328054515733,
0.9458056056283096,
0.9438861105391212,
0.5817091970472454,
0.7569604896705641,
0.8218947123117617,
1.018207403875189,
1.1010029798221634,
0.9465819692527686,
0.814417460316642,
1.0235493853637674,
1.0509903094995015,
0.253633518543101,
0.8683001855208362,
1.30520261944787,
1.343332950628628,
0.6632266743646964,
0.9013610043697025,
1.2023513991292414,
1.2586236545183238,
0.6150043356511683,
1.3200637705575908,
0.7542765458925164,
1.2646942885022279,
0.9925989836176894,
0.7605610338261042,
1.6500313976828886,
0.7566597340183807,
0.7126367301175398,
1.2003120613069236,
0.709715022829928,
0.8689033333150049,
0.7705213185963209,
1.2621265135152577,
0.5979005934801415,
1.3396929432415827,
1.1795993021018927,
1.3580137018193206,
1.0254112855981288,
1.002235170403996,
0.5666114088281122,
1.2369942641799314,
0.5188015989771714,
1.3867625675478898,
0.8646212692089373,
0.6415591880217851,
0.7349604811314046,
0.1180447101182911,
1.2657269023560016,
0.9921242400529936,
0.39945711030201436,
1.0746979541393236,
0.9014913019518868,
0.835724314619868,
0.9762014495613869,
1.1084716625325355,
0.8609571716537513,
1.3356232368531642,
0.41454761877775204,
0.9686512957174368,
0.8699360429787882,
0.7970001369417555,
0.9944891230064127,
0.8114942597531422,
1.3908958414405517,
1.0643642429054576,
1.1317782691050264,
0.6480278361666125,
0.6078140809665769,
0.7801529049963631,
1.3109906761240895,
0.7712551542085295,
0.6404601259180056,
0.23886251543232695,
1.0623469459923722,
1.2572825452723158,
0.39126288642561086,
1.5469803975313525,
1.3820394524346185,
1.1521358382433462,
0.4836470295224292,
0.6251035087751688,
0.6746892079697872,
0.6360431248566885,
0.668403027075984,
0.773446786772555,
-0.06503978555952616,
0.6382730823994429,
1.193678662156553,
0.36061329124199637,
0.6021863492442064,
0.8320200911009902,
0.8113207077128515,
0.6886601930095914,
0.5135825355925104,
0.8322742119592053,
0.7594919541616963,
0.7118225913505698,
0.7716603330119692,
0.20625756976651594,
0.9306009078838895,
0.39914469507396333,
0.9841624491414782,
-0.0674528425730313,
0.3893174695235144,
0.7864408508636234,
0.6313724493298972,
1.0753973493020523,
0.47749799992216857,
0.20313458975654952,
0.3229548639859968,
0.28148247644611823,
0.3872720561974697,
-0.021044860403018062,
0.4675157335814705,
0.4746467225105789,
0.36656431869539446,
0.435593399613729,
0.5292249588467601,
-0.18900898804018318,
-0.009939508261966212,
-0.25976173351723914,
0.6105143670461437,
-0.02755013756522584,
0.3593221776807143,
0.5493932962105615,
0.3573969074798671,
0.6830529915310675,
0.22726582658568356,
0.04930768090069898,
-0.37453686783445705,
0.23377847375909672,
-0.033696156997094606,
-0.12055611889134413,
0.17293896442591308,
0.3094716432813565,
-0.007871340539202715,
0.1839744204086588,
0.014526226374661638,
0.47208963519400593,
-0.42559836317636895,
0.0051032853100547865,
0.4565777216115685,
0.1585789374419917,
-0.3151165899299889,
0.15918743544776745,
0.055765809878342586,
-0.16682479569235764,
0.6590034612997886,
-0.4086810799674353,
-0.6713859149328971,
0.22301471649186125,
-0.14242280289488946,
-0.40632788509131673,
-0.18047784948696707,
-0.3743126760823303,
-0.38790494221536853,
-0.14881247097939654,
-0.2701951271537527,
-0.4662691460909668,
-0.2722423314610245,
-0.5395022727270617,
-0.1293694926250268,
-0.08293425045291089,
-0.370034424852549,
-0.2567077836024111,
-0.03164096845015091,
0.09218168604426294,
-0.25557602023891884,
0.16626495517811385,
0.04538269286112012,
-0.09551399601965163,
-0.10129648838819819,
-0.8127874443565033,
-0.20363752601012153,
-0.17145751154440433,
-0.9912712878782134,
0.31416710267413317,
-0.47478189969910056,
-0.29327977666388666,
-0.6938207960593834,
-0.4557457267059617,
-0.8647954072519632,
-0.22201085546637125,
-0.18820418064425956,
-0.8139763148646917,
0.07009074141353505,
-0.09875825665142862,
-0.9246287245934172,
-0.213050722167062,
-0.4633407726949337,
-0.3453426560299797,
-0.9319489953801489,
-0.8071303440947097,
-0.48815090203706313,
-0.3201542299289437,
-0.5139702284126206,
-0.524694001187937,
-0.5603573544127358,
-0.2728442797105678,
-0.463753009046165,
-0.9713297807324996,
-1.0232366768462218,
-0.7981769135795771,
-0.6828681032031692,
-0.7200717137278253,
-0.37423461318787615,
-0.6671010923426861,
-0.9024835786883041,
-0.28162970683862903,
-0.5869532822464639,
-0.4160767319723484,
-0.6554889115615928,
-1.097036629235601,
-0.9749533132968939,
-1.1940938467182027,
-0.1552236328990334,
0.02105956988778901,
-0.20126388069689283,
-1.0035941627977478,
-0.9684561172806294,
-0.9463688515122418,
-0.5256808035788618,
-0.925287791779094,
-0.8571991328956002,
-1.0089340970482894,
-0.9025059402390234,
-1.2505334589284558,
-1.1042250656842547,
-1.170007777615871,
-1.0837336108343463,
-0.8992039773070942,
-0.8479363696693423,
-0.8049257737357053,
-0.9728557838150207,
-0.7399809444080351,
-0.7279464353360916,
-1.040690477706343,
-1.0285330387963803,
-0.7133325907769261,
-0.7684441594325514,
-1.0817879367887087,
-1.4139121689553822,
-1.2193195632986633,
-0.8414838408844947,
-0.56975994809548,
-1.1021048218640828,
-1.3586301405994532,
-1.2029581662947486,
-0.4448945607769985,
-0.9365180482335346,
-1.4847934382994514,
-0.7995549124844374,
-0.9996239438932367,
-0.8992893637490595,
-1.18474015487625,
-0.8235860342695493,
-1.0195408043034122,
-0.6801451060715735,
-0.9861225039607516,
-0.7141742334871857,
-1.0801551087272063,
-0.6828347375765155,
-1.3188257656000328,
-0.9637389424561,
-1.278842003988017,
-0.5035536368844923,
-0.5091551149875138,
-0.21450463086661875,
-1.3921955385137312,
-0.9252207292581845,
-1.333197147349575,
-1.3460191206200371,
-0.8152916449102685,
-0.34270168121140165,
-0.849490138682615,
-0.9011456996681377,
-1.6221717420159665,
-0.3284821538513588,
-1.1216606471512047,
-1.2896550205713972,
-0.9518876272152961,
-1.1623939591903159,
-0.8484589739385757,
-0.8853359094420747,
-1.2513722867326815,
-0.6112309403500895,
-1.261141242320262,
-1.0540292407446983,
-1.0949706177512195,
-0.8344718689871788,
-0.793659286877586,
-1.1623932827501746,
-1.2198103555271729,
-0.5609146633853258,
-0.8791215236965653,
-0.5258495505045114,
-1.5651551800807182,
-0.5796241573273608,
-1.2115324404872527,
-0.8517958188432478,
-0.9794230560001137,
-0.6247844362208816,
-1.2524140421862833,
-1.134418246917471,
-1.273384618011838,
-1.0167876714880943,
-1.050909674411177,
-0.7853399254638768,
-1.30487922267357,
-0.6738583499653729,
-0.4147219546940533,
-0.7320421377107805,
-1.245397888377414,
-0.3231968611787627,
-0.39399226181790137,
-0.3835049218664856,
-0.20272982435127673,
-0.853623997482071,
-0.8407705990179689,
-0.8047210166320771,
-1.1352778665555459,
-1.469633888437572,
-0.3324680496607507,
-1.2916515210209893,
-0.23921201758708577,
-0.9408066933430341,
-1.0253891832925859,
-0.581014128048161,
-0.7108359520232836,
-1.1427875076269978,
-0.5680875017985603,
-1.0792789652248427,
-0.3676860954931097,
-0.8860705708531004,
-0.8546160506508003,
-0.62081794682844,
-0.8129680945752247,
-0.882106599463961,
-0.40906086209498327,
-0.38092503652598997,
-0.8306600298646307,
-0.8699122295195001,
-0.5560788151519604,
-0.952352665625603,
-0.7728976632964616,
-0.5009899765468689,
-0.7719082866957467,
-0.07747091360184433,
-0.19048933522835626,
-0.27191528856694114,
0.3348724885334097,
0.056184663879592756,
-0.4211419804547011,
-0.8470624359529295,
-0.7506447134781522,
-0.28829119443813156,
-1.1088727185888605,
-0.8706169037741915,
-0.5354782544243859,
-0.6688591476740368,
-0.7288007732222797,
-0.5899090178127794,
-0.26570522984581063,
-0.869578472641483,
-0.7249189609445943,
-0.6173276281654712,
-0.6755031495495629,
-0.7611794162271095,
-0.014228177199175185,
-0.24496217112811902,
-0.39120081666047923,
-0.15944755353683945,
0.18633685387756244,
-0.6564083043287896,
0.27296344694326463,
-0.5412343638088811,
-0.2065221512072059,
-0.0526020401207998,
-0.1397979489575243,
-0.2960314616588298,
0.17214542917359582,
-0.4658556442780852,
0.08017918640118168,
-0.277839512382729,
0.32343171757003225,
-0.06813506773360918,
0.05361755422204886,
-0.04188856709234451,
0.1754343135274126,
-0.2262010592009225,
0.23475952320975563,
-0.4811734616802225,
0.44458602237716466,
0.46577393661389555,
-0.49658953661715177,
0.10771851987574972,
0.6032854707073874,
};