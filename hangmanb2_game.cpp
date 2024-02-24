#include "hangmanb2_game.h"
#include "ui_hangmanb2_game.h"
#include "hangman_game.h"
#include "word.h"
#include "gamecomplete.h"
#include <vector>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QPixmap>

int CurrentScoreB2 = 0;
int HangB2 = 0;
int FullWordB2 = 0;
QElapsedTimer timerHangmanB2;

HangmanB2_game::HangmanB2_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HangmanB2_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
    timerHangmanB2.start();

    Word b2_1("abandon", "verb");
    Word b2_2("absolute", "adjective");
    Word b2_3("academic", "noun");
    Word b2_4("acceptable", "adjective");
    Word b2_5("accompany", "verb");
    Word b2_6("account", "verb");
    Word b2_7("accurate", "adjective");
    Word b2_8("accuse", "verb");
    Word b2_9("acknowledge", "verb");
    Word b2_10("acquire", "verb");
    Word b2_11("actual", "adjective");
    Word b2_12("adapt", "verb");
    Word b2_13("additional", "adjective");
    Word b2_14("address", "verb");
    Word b2_15("administration", "noun");
    Word b2_16("adopt", "verb");
    Word b2_17("advance", "adjective");
    Word b2_18("advance", "noun");
    Word b2_19("advance", "verb");
    Word b2_20("affair", "noun");
    Word b2_21("afterwards", "adverb");
    Word b2_22("agency", "noun");
    Word b2_23("agenda", "noun");
    Word b2_24("aggressive", "adjective");
    Word b2_25("aid", "noun");
    Word b2_26("aid", "verb");
    Word b2_27("aircraft", "noun");
    Word b2_28("alarm", "verb");
    Word b2_29("alter", "verb");
    Word b2_30("amount", "verb");
    Word b2_31("anger", "noun");
    Word b2_32("angle", "noun");
    Word b2_33("anniversary", "noun");
    Word b2_34("annual", "adjective");
    Word b2_35("anxious", "adjective");
    Word b2_36("apparent", "adjective");
    Word b2_37("apparently", "adverb");
    Word b2_38("appeal", "noun");
    Word b2_39("appeal", "verb");
    Word b2_40("approach", "noun");
    Word b2_41("approach", "verb");
    Word b2_42("appropriate", "adjective");
    Word b2_43("approval", "noun");
    Word b2_44("approve", "verb");
    Word b2_45("arise", "verb");
    Word b2_46("armed", "adjective");
    Word b2_47("arms", "noun");
    Word b2_48("artificial", "adjective");
    Word b2_49("artistic", "adjective");
    Word b2_50("ashamed", "adjective");
    Word b2_51("aspect", "noun");
    Word b2_52("assess", "verb");
    Word b2_53("assessment", "noun");
    Word b2_54("associate", "verb");
    Word b2_55("associated", "adjective");
    Word b2_56("association", "noun");
    Word b2_57("assume", "verb");
    Word b2_58("attempt", "noun");
    Word b2_59("attempt", "verb");
    Word b2_60("back", "verb");
    Word b2_61("bacteria", "noun");
    Word b2_62("bar", "verb");
    Word b2_63("barrier", "noun");
    Word b2_64("basically", "adverb");
    Word b2_65("battle", "verb");
    Word b2_66("bear", "verb");
    Word b2_67("beat", "noun");
    Word b2_68("beg", "verb");
    Word b2_69("being", "noun");
    Word b2_70("bent", "adjective");
    Word b2_71("bet", "noun");
    Word b2_72("bet", "verb");
    Word b2_73("beyond", "adverb");
    Word b2_74("beyond", " preposition");
    Word b2_75("bill", "verb");
    Word b2_76("bitter", "adjective");
    Word b2_77("blame", "noun");
    Word b2_78("blame", "verb");
    Word b2_79("blind", "adjective");
    Word b2_80("bond", "noun");
    Word b2_81("border", "verb");
    Word b2_82("breast", "noun");
    Word b2_83("brief", "adjective");
    Word b2_84("broad", "adjective");
    Word b2_85("broadcast", "noun");
    Word b2_86("broadcast", "verb");
    Word b2_87("budget", "noun");
    Word b2_88("bullet", "noun");
    Word b2_89("bunch", "noun");
    Word b2_90("burn", " noun");
    Word b2_91("bush", " noun");
    Word b2_92("but", "preposition");
    Word b2_93("cable", "noun");
    Word b2_94("calculate", "verb");
    Word b2_95("cancel", "verb");
    Word b2_96("cancer", "noun");
    Word b2_97("capable", "adjective");
    Word b2_98("capacity", "noun");
    Word b2_99("capture", "noun");
    Word b2_100("capture", "verb");
    Word b2_101("cast", "noun");
    Word b2_102("cast", "verb");
    Word b2_103("catch", "noun");
    Word b2_104("cell", "noun");
    Word b2_105("chain", "verb");
    Word b2_106("chair", "verb");
    Word b2_107("chairman", "noun");
    Word b2_108("challenge", "verb");
    Word b2_109("characteristic", "adjective");
    Word b2_110("characteristic", "noun");
    Word b2_111("chart", "verb");
    Word b2_112("chief", "adjective");
    Word b2_113("chief", "noun");
    Word b2_114("circumstance", "noun");
    Word b2_115("cite", "verb");
    Word b2_116("citizen", "noun");
    Word b2_117("civil", "adjective");
    Word b2_118("classic", "adjective");
    Word b2_119("classic", "noun");
    Word b2_120("close", "noun");
    Word b2_121("closely", "adverb");
    Word b2_122("collapse", "noun");
    Word b2_123("collapse", "verb");
    Word b2_124("combination", "noun");
    Word b2_125("comfort", "noun");
    Word b2_126("comfort", "verb");
    Word b2_127("command", "noun");
    Word b2_128("command", "verb");
    Word b2_129("commission", "noun");
    Word b2_130("commission", "verb");
    Word b2_131("commitment", "noun");
    Word b2_132("committee", "noun");
    Word b2_133("commonly", "adverb");
    Word b2_134("complex", " noun");
    Word b2_135("complicated", "adjective");
    Word b2_136("component", "noun");
    Word b2_137("concentration", "noun");
    Word b2_138("concept", "noun");
    Word b2_139("concern", "noun");
    Word b2_140("concern", "verb");
    Word b2_141("concerned", "adjective");
    Word b2_142("conduct", "noun");
    Word b2_143("conduct", "verb");
    Word b2_144("confidence", "noun");
    Word b2_145("conflict", "noun");
    Word b2_146("conflict", "verb");
    Word b2_147("confusing", "adjective");
    Word b2_148("conscious", "adjective");
    Word b2_149("conservative", "adjective");
    Word b2_150("conservative", "noun");
    Word b2_151("consideration", "noun");
    Word b2_152("consistent", "adjective");
    Word b2_153("constant", "adjective");
    Word b2_154("constantly", "adverb");
    Word b2_155("construct", "verb");
    Word b2_156("construction", "noun");
    Word b2_157("contemporary", "adjective");
    Word b2_158("contest", "noun");
    Word b2_159("contest", "verb");
    Word b2_160("contract", "noun");
    Word b2_161("contract", "verb");
    Word b2_162("contribute", "verb");
    Word b2_163("contribution", "noun");
    Word b2_164("convert", "verb");
    Word b2_165("convinced", "adjective");
    Word b2_166("core", "adjective");
    Word b2_167("core", "noun");
    Word b2_168("corporate", "adjective");
    Word b2_169("council", "noun");
    Word b2_170("county", "noun");
    Word b2_171("courage", "verb");
    Word b2_172("crash", "noun");
    Word b2_173("crash", " verb");
    Word b2_174("creation", "noun");
    Word b2_175("creature", "noun");
    Word b2_176("credit", "verb");
    Word b2_177("crew", "noun");
    Word b2_178("crisis", "noun");
    Word b2_179("criterion", "noun");
    Word b2_180("critic", "noun");
    Word b2_181("critical", "adjective");
    Word b2_182("criticism", "noun");
    Word b2_183("criticize", "verb");
    Word b2_184("crop", "noun");
    Word b2_185("crucial", "adjective");
    Word b2_186("cry", "noun");
    Word b2_187("cure", "noun");
    Word b2_188("cure", "verb");
    Word b2_189("current", " noun");
    Word b2_190("curve", " noun");
    Word b2_191("curve", "verb");
    Word b2_192("curved", "adjective");
    Word b2_193("date", "verb");
    Word b2_194("debate", "noun");
    Word b2_195("debate", "verb");
    Word b2_196("debt", "noun");
    Word b2_197("decent", "adjective");
    Word b2_198("declare", "verb");
    Word b2_199("decline", "noun");
    Word b2_200("decline", "verb");
    Word b2_201("decoration", "noun");
    Word b2_202("decrease", "noun");
    Word b2_203("decrease", "verb");
    Word b2_204("deeply", "adverb");
    Word b2_205("defeat", "noun");
    Word b2_206("defeat", "verb");
    Word b2_207("defence", "noun");
    Word b2_208("defend", "verb");
    Word b2_209("delay", "noun");
    Word b2_210("delay", "verb");
    Word b2_211("deliberate", "adjective");
    Word b2_212("deliberately", "adverb");
    Word b2_213("delight", "noun");
    Word b2_214("delight", "verb");
    Word b2_215("delighted", "adjective");
    Word b2_216("delivery", "noun");
    Word b2_217("demand", "noun");
    Word b2_218("demand", "verb");
    Word b2_219("demonstrate", "verb");
    Word b2_220("depressed", "adjective");
    Word b2_221("depressing", "adjective");
    Word b2_222("depth", "noun");
    Word b2_223("desert", "verb");
    Word b2_224("deserve", "verb");
    Word b2_225("desire", "noun");
    Word b2_226("desire", "verb");
    Word b2_227("desperate", "adjective");
    Word b2_228("detail", "verb");
    Word b2_229("detailed", "adjective");
    Word b2_230("detect", "verb");
    Word b2_231("dig", "verb");
    Word b2_232("disc", "verb");
    Word b2_233("discipline", "noun");
    Word b2_234("discount", "verb");
    Word b2_235("dishonest", " adjective");
    Word b2_236("disk", "noun");
    Word b2_237("dismiss", "verb");
    Word b2_238("display", "noun");
    Word b2_239("display", "verb");
    Word b2_240("distribute", "verb");
    Word b2_241("distribution", "noun");
    Word b2_242("district", "noun");
    Word b2_243("divide", "noun");
    Word b2_244("division", "noun");
    Word b2_245("document", "verb");
    Word b2_246("domestic", "adjective");
    Word b2_247("dominate", "verb");
    Word b2_248("downwards", "adverb");
    Word b2_249("dozen", " determiner");
    Word b2_250("dozen", "noun");
    Word b2_251("draft", "noun");
    Word b2_252("draft", "verb");
    Word b2_253("drag", "verb");
    Word b2_254("dramatic", "adjective");
    Word b2_255("edit", "verb");
    Word b2_256("edition", "noun");
    Word b2_257("efficient", "adjective");
    Word b2_258("elderly", "adjective");
    Word b2_259("elect", "verb");
    Word b2_260("elsewhere", "adverb");
    Word b2_261("emerge", "verb");
    Word b2_262("emotional", "adjective");
    Word b2_263("emphasis", "noun");
    Word b2_264("emphasize", "verb");
    Word b2_265("enable", "verb");
    Word b2_266("encounter", "noun");
    Word b2_267("encounter", "verb");
    Word b2_268("engage", "verb");
    Word b2_269("enhance", "verb");
    Word b2_270("enquiry", "noun");
    Word b2_271("ensure", "verb");
    Word b2_272("enthusiasm", "noun");
    Word b2_273("enthusiastic", " adjective");
    Word b2_274("entire", " adjective");
    Word b2_275("entirely", "adverb");
    Word b2_276("equal", "noun");
    Word b2_277("establish", "verb");
    Word b2_278("estate", "noun");
    Word b2_279("estimate", "noun");
    Word b2_280("estimate", "verb");
    Word b2_281("ethical", "adjective");
    Word b2_282("evaluate", "verb");
    Word b2_283("even", "adjective");
    Word b2_284("evil", "adjective");
    Word b2_285("evil", "noun");
    Word b2_286("examination", "noun");
    Word b2_287("excuse", "noun");
    Word b2_288("excuse", "verb");
    Word b2_289("executive", "adjective");
    Word b2_290("executive", " noun");
    Word b2_291("existence", " noun");
    Word b2_292("expectation", "noun");
    Word b2_293("expense", "noun");
    Word b2_294("exploration", "noun");
    Word b2_295("expose", "verb");
    Word b2_296("extend", "verb");
    Word b2_297("extent", "noun");
    Word b2_298("external", "adjective");
    Word b2_299("extraordinary", "adjective");
    Word b2_300("extreme", "noun");
    Word b2_301("facility", "noun");
    Word b2_302("failure", "noun");
    Word b2_303("faith", "noun");
    Word b2_304("fault", "noun");
    Word b2_305("favour", "verb");
    Word b2_306("feather", "noun");
    Word b2_307("fee", "noun");
    Word b2_308("feed", "noun");
    Word b2_309("feedback", "noun");
    Word b2_310("figure", "verb");
    Word b2_311("fellow", "adjective");
    Word b2_312("file", "verb");
    Word b2_313("finance", "noun");
    Word b2_314("finance", "verb");
    Word b2_315("finding", "noun");
    Word b2_316("firm", "noun");
    Word b2_317("fix", "noun");
    Word b2_318("flame", "noun");
    Word b2_319("flash", "noun");
    Word b2_320("flash", "verb");
    Word b2_321("flexible", "adjective");
    Word b2_322("float", "verb");
    Word b2_323("fold", "noun");
    Word b2_324("folding", "adjective");
    Word b2_325("following", "preposition");
    Word b2_326("forgive", "verb");
    Word b2_327("former", "adjective");
    Word b2_328("fortune", "noun");
    Word b2_329("forward", "adjective");
    Word b2_330("found", "verb");
    Word b2_331("free", "verb");
    Word b2_332("freedom", "noun");
    Word b2_333("frequency", "noun");
    Word b2_334("fuel", " verb");
    Word b2_335("fully", "adverb");
    Word b2_336("function", "verb");
    Word b2_337("fund", "noun");
    Word b2_338("fund", "verb");
    Word b2_339("fundamental", "adjective");
    Word b2_340("funding", "noun");
    Word b2_341("furthermore", "adverb");
    Word b2_342("gain", "noun");
    Word b2_343("gain", "verb");
    Word b2_344("gang", "noun");
    Word b2_345("generate", "verb");
    Word b2_346("genre", "noun");
    Word b2_347("govern", "verb");
    Word b2_348("grab", "verb");
    Word b2_349("grade", "verb");
    Word b2_350("gradually", "adverb");
    Word b2_351("grand", "adjective");
    Word b2_352("grant", "noun");
    Word b2_353("grant", "verbb");
    Word b2_354("guarantee", "noun");
    Word b2_355("guarantee", "verb");
    Word b2_356("handle", "noun");
    Word b2_357("handle", "verb");
    Word b2_358("harm", "noun");
    Word b2_359("harm", "verb");
    Word b2_360("harmful", "adjective");
    Word b2_361("hearing", "noun");
    Word b2_362("heaven", "noun");
    Word b2_363("heel", "noun");
    Word b2_364("hell", "noun");
    Word b2_365("hesitate", "verb");
    Word b2_366("high", "noun");
    Word b2_367("hire", "noun");
    Word b2_368("hold", "noun");
    Word b2_369("hollow", "adjective");
    Word b2_370("holy", "adjective");
    Word b2_371("honour", "noun");
    Word b2_372("honour", "verb");
    Word b2_373("host", " verb");
    Word b2_374("house", "verb");
    Word b2_375("household", "noun");
    Word b2_376("housing", "noun");
    Word b2_377("humorous", "adjective");
    Word b2_378("humour", "noun");
    Word b2_379("hunt", "noun");
    Word b2_380("hunting", "noun");
    Word b2_381("hurt", "noun");
    Word b2_382("ideal", "noun");
    Word b2_383("illustrate", "verb");
    Word b2_384("illustration", "noun");
    Word b2_385("imagination", "noun");
    Word b2_386("impatient", "adjective");
    Word b2_387("imply", "verb");
    Word b2_388("impose", "verb");
    Word b2_389("impress", " verb");
    Word b2_390("impressed", " adjective");
    Word b2_391("inch", "noun");
    Word b2_392("incident", "noun");
    Word b2_393("income", "noun");
    Word b2_394("increasingly", "adverb");
    Word b2_395("industrial", "adjective");
    Word b2_396("infection", "noun");
    Word b2_397("inform", "verb");
    Word b2_398("initial", "adjective");
    Word b2_399("initially", "adverb");
    Word b2_400("initiative", "noun");
    Word b2_401("inner", "adjective");
    Word b2_402("inquiry", "noun");
    Word b2_403("insight", "noun");
    Word b2_404("insist", "verb");
    Word b2_405("inspire", "verb");
    Word b2_406("install", "verb");
    Word b2_407("instance", "noun");
    Word b2_408("institute", "noun");
    Word b2_409("institution", "noun");
    Word b2_410("insurance", "noun");
    Word b2_411("intended", "adjective");
    Word b2_412("intense", "adjective");
    Word b2_413("internal", "adjective");
    Word b2_414("interpret", "verb");
    Word b2_415("interrupt", "verb");
    Word b2_416("investigation", "noun");
    Word b2_417("investment", "noun");
    Word b2_418("issue", "verb");
    Word b2_419("joy", "ืnoun");
    Word b2_420("judgement", "noun");
    Word b2_421("junior", "adjective");
    Word b2_422("justice", "noun");
    Word b2_423("justify", "verb");
    Word b2_424("labour", "noun");
    Word b2_425("landscape", "noun");
    Word b2_426("largely", "adverb");
    Word b2_427("latest", "noun");
    Word b2_428("launch", "noun");
    Word b2_429("launch", "verb");
    Word b2_430("leadership", "noun");
    Word b2_431("league", "noun");
    Word b2_432("lean", "verb");
    Word b2_433("leave", "noun");
    Word b2_434("level", "verb");
    Word b2_435("licence", " noun");
    Word b2_436("limited", "adjective");
    Word b2_437("line", "verb");
    Word b2_438("lively", "adjective");
    Word b2_439("load", "noun");
    Word b2_440("load", "verb");
    Word b2_441("loan", "noun");
    Word b2_442("logical", "adjective");
    Word b2_443("long-term", "adjective");
    Word b2_444("long-term", "adverb");
    Word b2_445("loose", "adjective");
    Word b2_446("lord", "noun");
    Word b2_447("low", "noun");
    Word b2_448("lower", "verb");
    Word b2_449("lung", " noun");
    Word b2_450("maintain", "verb");
    Word b2_451("majority", "noun");
    Word b2_452("make", "noun");
    Word b2_453("map", "verb");
    Word b2_454("mass", "adjective");
    Word b2_455("mass", "noun");
    Word b2_456("massive", "adjective");
    Word b2_457("master", "noun");
    Word b2_458("master", "verb");
    Word b2_459("matching", "adjective");
    Word b2_460("material", "adjective");
    Word b2_461("maximum", "adjective");
    Word b2_462("maximum", "noun");
    Word b2_463("means", "noun");
    Word b2_464("measurement", "noun");
    Word b2_465("medium", "noun");
    Word b2_466("melt", "verb");
    Word b2_467("military", "adjective");
    Word b2_468("military", "noun");
    Word b2_469("mineral", "noun");
    Word b2_470("minimum", "adjective");
    Word b2_471("minimum", "noun");
    Word b2_472("minimum", "noun");
    Word b2_473("minister", " noun");
    Word b2_474("minor", " adjective");
    Word b2_475("minority", "noun");
    Word b2_476("mission", "noun");
    Word b2_477("mistake", "verb");
    Word b2_478("mixed", "adjective");
    Word b2_479("model", "verb");
    Word b2_480("modify", "verb");
    Word b2_481("monitor", "noun");
    Word b2_482("monitor", "verb");
    Word b2_483("moral", "adjective");
    Word b2_484("moral", "noun");
    Word b2_485("motor", "adjective");
    Word b2_486("motor", "noun");
    Word b2_487("mount", "verb");
    Word b2_488("multiple", "adjective");
    Word b2_489("multiply", "verb");
    Word b2_490("mysterious", " adjective");
    Word b2_491("narrow", " verb");
    Word b2_492("national", "noun");
    Word b2_493("neat", "adjective");
    Word b2_494("negative", "noun");
    Word b2_495("nerve", "noun");
    Word b2_496("nevertheless", "adverb");
    Word b2_497("nightmare", "noun");
    Word b2_498("notion", "noun");
    Word b2_499("numerous", "adjective");
    Word b2_500("obey", "verb");
    Word b2_501("object", "verb");
    Word b2_502("objective", "adjective");
    Word b2_503("objective", "noun");
    Word b2_504("obligation", "noun");
    Word b2_505("observation", "noun");
    Word b2_506("observe", "verb");
    Word b2_507("obtain", "verb");
    Word b2_508("occasionally", "adverb");
    Word b2_509("offence", "noun");
    Word b2_510("offend", "verb");
    Word b2_511("offensive", "adjective");
    Word b2_512("official", "noun");
    Word b2_513("opening", "noun");
    Word b2_514("operate", "verb");
    Word b2_515("opponent", "noun");
    Word b2_516("oppose", "verb");
    Word b2_517("opposed", "adjective");
    Word b2_518("opposition", "noun");
    Word b2_519("organ", "noun");
    Word b2_520("origin", "noun");
    Word b2_521("otherwise", "adverb");
    Word b2_522("outcome", "noun");
    Word b2_523("outer", "adjective");
    Word b2_524("outline", "noun");
    Word b2_525("outline", "verb");
    Word b2_526("overall", "adjective");
    Word b2_527("overall", "adverb");
    Word b2_528("owe", "verb");
    Word b2_529("pace", "noun");
    Word b2_530("pace", "verb");
    Word b2_531("package", "verb");
    Word b2_532("panel", "noun");
    Word b2_533("parliament", "noun");
    Word b2_534("participant", " noun");
    Word b2_535("partly", "adverb");
    Word b2_536("passage", "noun");
    Word b2_537("patient", "adjective");
    Word b2_538("pension", "noun");
    Word b2_539("permanent", "adjective");
    Word b2_540("permit", "noun");
    Word b2_541("permit", "verb");
    Word b2_542("perspective", "noun");
    Word b2_543("phase", "noun");
    Word b2_544("phenomenon", "noun");
    Word b2_545("philosophy", "noun");
    Word b2_546("pick", "noun");
    Word b2_547("picture", "verb");
    Word b2_548("pile", "noun");
    Word b2_549("pile", "verb");
    Word b2_550("pitch", "noun");
    Word b2_551("plain", "adjective");
    Word b2_552("plot", "verb");
    Word b2_553("plus", "adjective");
    Word b2_554("plus", "conjunction");
    Word b2_555("plus", "noun");
    Word b2_556("pointed", "adjective");
    Word b2_557("popularity", "noun");
    Word b2_558("pose", "verb");
    Word b2_559("position", "verb");
    Word b2_560("positive", "noun");
    Word b2_561("possess", "verb");
    Word b2_562("potential", "adjective");
    Word b2_563("potential", "noun");
    Word b2_564("power", "verb");
    Word b2_565("praise", "noun");
    Word b2_566("praise", "verb");
    Word b2_567("pregnant", "adjective");
    Word b2_568("preparation", "noun");
    Word b2_569("presence", "noun");
    Word b2_570("preserve", "verb");
    Word b2_571("price", "verb");
    Word b2_572("prime", "adjective");
    Word b2_573("principle", " noun");
    Word b2_574("print", "noun");
    Word b2_575("priority", "noun");
    Word b2_576("privacy", "noun");
    Word b2_577("procedure", "noun");
    Word b2_578("process", "verb");
    Word b2_579("produce", "noun");
    Word b2_580("professional", "noun");
    Word b2_581("progress", "verb");
    Word b2_582("project", "verb");
    Word b2_583("proof", "noun");
    Word b2_584("proposal", "noun");
    Word b2_585("propose", "verb");
    Word b2_586("prospect", "noun");
    Word b2_587("protection", "noun");
    Word b2_588("psychologist", "noun");
    Word b2_589("psychology", " noun");
    Word b2_590("publication", " noun");
    Word b2_591("pupil", "noun");
    Word b2_592("purchase", "noun");
    Word b2_593("purchase", "verb");
    Word b2_594("pure", "adjective");
    Word b2_595("pursue", "verb");
    Word b2_596("range", "verb");
    Word b2_597("rank", "noun");
    Word b2_598("rank", "verb");
    Word b2_599("rapid", "adjective");
    Word b2_600("rapidly", "adverb");
    Word b2_601("rate", "verb");
    Word b2_602("raw", "adjective");
    Word b2_603("reach", "noun");
    Word b2_604("realistic", "adjective");
    Word b2_605("reasonable", "adjective");
    Word b2_606("recall", "verb");
    Word b2_607("recover", "verb");
    Word b2_608("reduction", "noun");
    Word b2_609("regard", "noun");
    Word b2_610("regard", "verb");
    Word b2_611("regional", "adjective");
    Word b2_612("register", "noun");
    Word b2_613("register", "verb");
    Word b2_614("regret", "noun");
    Word b2_615("regret", "verb");
    Word b2_616("regulation", "noun");
    Word b2_617("relatively", "adverb");
    Word b2_618("relevant", "adjective");
    Word b2_619("relief", "noun");
    Word b2_620("rely", "verb");
    Word b2_621("remark", "noun");
    Word b2_622("remark", "verb");
    Word b2_623("representative", "adjective");
    Word b2_624("representative", "noun");
    Word b2_625("reputation", "noun");
    Word b2_626("requirement", "noun");
    Word b2_627("rescue", "noun");
    Word b2_628("rescue", "verb");
    Word b2_629("reserve", "noun");
    Word b2_630("reserve", "verb");
    Word b2_631("resident", "adjective");
    Word b2_632("resident", "noun");
    Word b2_633("resist", "verb");
    Word b2_634("resolve", "verb");
    Word b2_635("resort", " noun");
    Word b2_636("retain", "verb");
    Word b2_637("reveal", "verb");
    Word b2_638("revolution", "noun");
    Word b2_639("reward", "noun");
    Word b2_640("reward", "verb");
    Word b2_641("rhythm", "noun");
    Word b2_642("rid", "verb");
    Word b2_643("root", "noun");
    Word b2_644("round", "noun");
    Word b2_645("routine", "adjective");
    Word b2_646("rub", "verb");
    Word b2_647("rubber", "adjective");
    Word b2_648("rubber", "noun");
    Word b2_649("rural", " adjective");
    Word b2_650("rush", "noun");
    Word b2_651("rush", "verb");
    Word b2_652("sample", "verb");
    Word b2_653("satellite", "noun");
    Word b2_654("satisfied", "adjective");
    Word b2_655("satisfy", "verb");
    Word b2_656("saving", "noun");
    Word b2_657("scale", "noun");
    Word b2_658("schedule", "verb");
    Word b2_659("scheme", "noun");
    Word b2_660("scream", "noun");
    Word b2_661("scream", "verb");
    Word b2_662("screen", "verb");
    Word b2_663("seat", "verb");
    Word b2_664("sector", "noun");
    Word b2_665("secure", " adjective");
    Word b2_666("secure", "verb");
    Word b2_667("seek", "verb");
    Word b2_668("select", "verb");
    Word b2_669("selection", "noun");
    Word b2_670("self", "noun");
    Word b2_671("senior", "adjective");
    Word b2_672("sense", "verb");
    Word b2_673("sensitive", " adjective");
    Word b2_674("sentence", " verb");
    Word b2_675("sequence", "noun");
    Word b2_676("session", "noun");
    Word b2_677("settle", "verb");
    Word b2_678("severe", "adjective");
    Word b2_679("shade", "noun");
    Word b2_680("shadow", "noun");
    Word b2_681("shallow", "adjective");
    Word b2_682("shame", "noun");
    Word b2_683("shape", "verb");
    Word b2_684("shelter", "noun");
    Word b2_685("shelter", "verb");
    Word b2_686("shift", "verb");
    Word b2_687("ship", "verb");
    Word b2_688("shock", "noun");
    Word b2_689("shock", "verb");
    Word b2_690("shocked", " adjective");
    Word b2_691("shooting", " noun");
    Word b2_692("shot", "noun");
    Word b2_693("significant", "adjective");
    Word b2_694("significantly", "adverb");
    Word b2_695("silence", "noun");
    Word b2_696("silk", "noun");
    Word b2_697("sincere", "adjective");
    Word b2_698("slave", "noun");
    Word b2_699("slide", "noun");
    Word b2_700("slide", "verb");
    Word b2_701("slight", "adjective");
    Word b2_702("slip", "verb");
    Word b2_703("slope", "noun");
    Word b2_704("slope", "verb");
    Word b2_705("solar", "adjective");
    Word b2_706("somewhat", "adverb");
    Word b2_707("soul", "noun");
    Word b2_708("specialist", "adjective");
    Word b2_709("specialist", "noun");
    Word b2_710("species", "noun");
    Word b2_711("speed", "verb");
    Word b2_712("spiritual", "adjective");
    Word b2_713("split", "noun");
    Word b2_714("split", "verb");
    Word b2_715("sponsor", "noun");
    Word b2_716("sponsor", "verb");
    Word b2_717("spot", "verb");
    Word b2_718("spread", "noun");
    Word b2_719("spring", "verb");
    Word b2_720("stable", "adjective");
    Word b2_721("stage", "verb");
    Word b2_722("stand", "noun");
    Word b2_723("stare", "verb");
    Word b2_724("status", "noun");
    Word b2_725("steady", "adjective");
    Word b2_726("steel", "noun");
    Word b2_727("steep", "adjective");
    Word b2_728("step", "verb");
    Word b2_729("sticky", "adjective");
    Word b2_730("stiff", "adjective");
    Word b2_731("stock", "noun");
    Word b2_732("stream", "noun");
    Word b2_733("stretch", "noun");
    Word b2_734("stretch", " verb");
    Word b2_735("strict", "adjective");
    Word b2_736("strike", "noun");
    Word b2_737("strike", "verb");
    Word b2_738("structure", "verb");
    Word b2_739("struggle", "noun");
    Word b2_740("stuff", "verb");
    Word b2_741("subject", "adjective");
    Word b2_742("submit", "verb");
    Word b2_743("sum", "noun");
    Word b2_744("sum", "verb");
    Word b2_745("surgery", "noun");
    Word b2_746("surround", "verb");
    Word b2_747("surrounding", "adjective");
    Word b2_748("survey", "verb");
    Word b2_749("suspect", "noun");
    Word b2_750("suspect", "verb");
    Word b2_751("swear", "verb");
    Word b2_752("sweep", "verb");
    Word b2_753("switch", "noun");
    Word b2_754("sympathy", "noun");
    Word b2_755("tale", "noun");
    Word b2_756("tank", "noun");
    Word b2_757("target", "verb");
    Word b2_758("tear", "noun");
    Word b2_759("tear", "verb");
    Word b2_760("temporary", "adjective");
    Word b2_761("term", "verb");
    Word b2_762("therapy", "noun");
    Word b2_763("threat", "noun");
    Word b2_764("threaten", "verb");
    Word b2_765("thus", "adverb");
    Word b2_766("time", "verb");
    Word b2_767("title", "verb");
    Word b2_768("tone", "noun");
    Word b2_769("tough", "adjective");
    Word b2_770("track", "verb");
    Word b2_771("transfer", "noun");
    Word b2_772("transfer", "verb");
    Word b2_773("transform", " verb");
    Word b2_774("transition", "noun");
    Word b2_775("trial", "noun");
    Word b2_776("trip", "verb");
    Word b2_777("tropical", "adjective");
    Word b2_778("trouble", "verb");
    Word b2_779("truly", "adverb");
    Word b2_780("trust", "noun");
    Word b2_781("trust", "verb");
    Word b2_782("try", "noun");
    Word b2_783("tune", "noun");
    Word b2_784("tunnel", "noun");
    Word b2_785("ultimately", "adverb");
    Word b2_786("unconscious", "adjective");
    Word b2_787("unexpected", "adjective");
    Word b2_788("unique", "adjective");
    Word b2_789("universe", " noun");
    Word b2_790("unknown", " adjective");
    Word b2_791("upper", "adjective");
    Word b2_792("upwards", "adverb");
    Word b2_793("urban", "adjective");
    Word b2_794("urge", "verb");
    Word b2_795("value", "verb");
    Word b2_796("vary", "verb");
    Word b2_797("vast", "adjective");
    Word b2_798("venue", "noun");
    Word b2_799("very", "adjective");
    Word b2_800("via", "preposition");
    Word b2_801("victory", "noun");
    Word b2_802("violence", "noun");
    Word b2_803("virtual", "adjective");
    Word b2_804("vision", "noun");
    Word b2_805("visual", "adjective");
    Word b2_806("vital", "adjective");
    Word b2_807("vitamin", "noun");
    Word b2_808("volume", "noun");
    Word b2_809("wage", "noun");
    Word b2_810("way", "adverb");
    Word b2_811("weakness", "noun");
    Word b2_812("wealth", "noun");
    Word b2_813("wealthy", "adjective");
    Word b2_814("whereas", "conjunction");
    Word b2_815("wherever", "conjunction");
    Word b2_816("whisper", "noun");
    Word b2_817("whisper", "verb");
    Word b2_818("whom", "pronoun");
    Word b2_819("widely", "adverb");
    Word b2_820("wildlife", "noun");
    Word b2_821("willing", "adjective");
    Word b2_822("wind", "verb");
    Word b2_823("wire", "noun");
    Word b2_824("wise", "adjective");
    Word b2_825("witness", "noun");
    Word b2_826("witness", "verb");
    Word b2_827("worse", "noun");
    Word b2_828("worst", "noun");
    Word b2_829("worth", "noun");
    Word b2_830("wound", "noun");
    Word b2_831("wound", "verb");
    Word b2_832("wrap", "verb");
    Word b2_833("wrong", "noun");
    Word b2_834("yet", "conjunction");
    Word b2_835("zone", " noun");


    VecB2 = {b2_1, b2_2, b2_3, b2_4, b2_5, b2_6, b2_7, b2_8, b2_9, b2_10, b2_11, b2_12, b2_13, b2_14, b2_15, b2_16, b2_17, b2_18, b2_19, b2_20,
             b2_21, b2_22, b2_23, b2_24, b2_25, b2_26, b2_27, b2_28, b2_29, b2_30, b2_31, b2_32, b2_33, b2_34, b2_35, b2_36, b2_37, b2_38, b2_39,
             b2_40, b2_41, b2_42, b2_43, b2_44, b2_45, b2_46, b2_47, b2_48, b2_49, b2_50, b2_51, b2_52, b2_53, b2_54, b2_55, b2_56, b2_57, b2_58,
             b2_59, b2_60, b2_61, b2_62, b2_63, b2_64, b2_65, b2_66, b2_67, b2_68, b2_69, b2_70, b2_71, b2_72, b2_73, b2_74, b2_75, b2_76, b2_77,
             b2_78, b2_79, b2_80, b2_81, b2_82, b2_83, b2_84, b2_85, b2_86, b2_87, b2_88, b2_89, b2_90, b2_91, b2_92, b2_93, b2_94, b2_95, b2_96,
             b2_97, b2_98, b2_99, b2_100, b2_101, b2_102, b2_103, b2_104, b2_105, b2_106, b2_107, b2_108, b2_109, b2_110, b2_111, b2_112, b2_113,
             b2_114, b2_115, b2_116, b2_117, b2_118, b2_119, b2_120, b2_121, b2_122, b2_123, b2_124, b2_125, b2_126, b2_127, b2_128, b2_129, b2_130,
             b2_131, b2_132, b2_133, b2_134, b2_135, b2_136, b2_137, b2_138, b2_139, b2_140, b2_141, b2_142, b2_143, b2_144, b2_145, b2_146, b2_147,
             b2_148, b2_149, b2_150, b2_151, b2_152, b2_153, b2_154, b2_155, b2_156, b2_157, b2_158, b2_159, b2_160, b2_161, b2_162, b2_163, b2_164,
             b2_165, b2_166, b2_167, b2_168, b2_169, b2_170, b2_171, b2_172, b2_173, b2_174, b2_175, b2_176, b2_177, b2_178, b2_179, b2_180, b2_181,
             b2_182, b2_183, b2_184, b2_185, b2_186, b2_187, b2_188, b2_189, b2_190, b2_191, b2_192, b2_193, b2_194, b2_195, b2_196, b2_197, b2_198,
             b2_199, b2_200, b2_201, b2_202, b2_203, b2_204, b2_205, b2_206, b2_207, b2_208, b2_209, b2_210, b2_211, b2_212, b2_213, b2_214, b2_215,
             b2_216, b2_217, b2_218, b2_219, b2_220, b2_221, b2_222, b2_223, b2_224, b2_225, b2_226, b2_227, b2_228, b2_229, b2_230, b2_231, b2_232,
             b2_233, b2_234, b2_235, b2_236, b2_237, b2_238, b2_239, b2_240, b2_241, b2_242, b2_243, b2_244, b2_245, b2_246, b2_247, b2_248, b2_249,
             b2_250, b2_251, b2_252, b2_253, b2_254, b2_255, b2_256, b2_257, b2_258, b2_259, b2_260, b2_261, b2_262, b2_263, b2_264, b2_265, b2_266,
             b2_267, b2_268, b2_269, b2_270, b2_271, b2_272, b2_273, b2_274, b2_275, b2_276, b2_277, b2_278, b2_279, b2_280, b2_281, b2_282, b2_283,
             b2_284, b2_285, b2_286, b2_287, b2_288, b2_289, b2_290, b2_291, b2_292, b2_293, b2_294, b2_295, b2_296, b2_297, b2_298, b2_299, b2_300,
             b2_301, b2_302, b2_303, b2_304, b2_305, b2_306, b2_307, b2_308, b2_309, b2_310, b2_311, b2_312, b2_313, b2_314, b2_315, b2_316, b2_317,
             b2_318, b2_319, b2_320, b2_321, b2_322, b2_323, b2_324, b2_325, b2_326, b2_327, b2_328, b2_329, b2_330, b2_331, b2_332, b2_333, b2_334,
             b2_335, b2_336, b2_337, b2_338, b2_339, b2_340, b2_341, b2_342, b2_343, b2_344, b2_345, b2_346, b2_347, b2_348, b2_349, b2_350, b2_351,
             b2_352, b2_353, b2_354, b2_355, b2_356, b2_357, b2_358, b2_359, b2_360, b2_361, b2_362, b2_363, b2_364, b2_365, b2_366, b2_367, b2_368,
             b2_369, b2_370, b2_371, b2_372, b2_373, b2_374, b2_375, b2_376, b2_377, b2_378, b2_379, b2_380, b2_381, b2_382, b2_383, b2_384, b2_385,
             b2_386, b2_387, b2_388, b2_389, b2_390, b2_391, b2_392, b2_393, b2_394, b2_395, b2_396, b2_397, b2_398, b2_399, b2_400, b2_401, b2_402,
             b2_403, b2_404, b2_405, b2_406, b2_407, b2_408, b2_409, b2_410, b2_411, b2_412, b2_413, b2_414, b2_415, b2_416, b2_417, b2_418, b2_419,
             b2_420, b2_421, b2_422, b2_423, b2_424, b2_425, b2_426, b2_427, b2_428, b2_429, b2_430, b2_431, b2_432, b2_433, b2_434, b2_435, b2_436,
             b2_437, b2_438, b2_439, b2_440, b2_441, b2_442, b2_443, b2_444, b2_445, b2_446, b2_447, b2_448, b2_449, b2_450, b2_451, b2_452, b2_453,
             b2_454, b2_455, b2_456, b2_457, b2_458, b2_459, b2_460, b2_461, b2_462, b2_463, b2_464, b2_465, b2_466, b2_467, b2_468, b2_469, b2_470,
             b2_471, b2_472, b2_473, b2_474, b2_475, b2_476, b2_477, b2_478, b2_479, b2_480, b2_481, b2_482, b2_483, b2_484, b2_485, b2_486, b2_487,
             b2_488, b2_489, b2_490, b2_491, b2_492, b2_493, b2_494, b2_495, b2_496, b2_497, b2_498, b2_499, b2_500, b2_501, b2_502, b2_503, b2_504,
             b2_505, b2_506, b2_507, b2_508, b2_509, b2_510, b2_511, b2_512, b2_513, b2_514, b2_515, b2_516, b2_517, b2_518, b2_519, b2_520, b2_521,
             b2_522, b2_523, b2_524, b2_525, b2_526, b2_527, b2_528, b2_529, b2_530, b2_531, b2_532, b2_533, b2_534, b2_535, b2_536, b2_537, b2_538,
             b2_539, b2_540, b2_541, b2_542, b2_543, b2_544, b2_545, b2_546, b2_547, b2_548, b2_549, b2_550, b2_551, b2_552, b2_553, b2_554, b2_555,
             b2_556, b2_557, b2_558, b2_559, b2_560, b2_561, b2_562, b2_563, b2_564, b2_565, b2_566, b2_567, b2_568, b2_569, b2_570, b2_571, b2_572,
             b2_573, b2_574, b2_575, b2_576, b2_577, b2_578, b2_579, b2_580, b2_581, b2_582, b2_583, b2_584, b2_585, b2_586, b2_587, b2_588, b2_589,
             b2_590, b2_591, b2_592, b2_593, b2_594, b2_595, b2_596, b2_597, b2_598, b2_599, b2_600, b2_601, b2_602, b2_603, b2_604, b2_605, b2_606,
             b2_607, b2_608, b2_609, b2_610, b2_611, b2_612, b2_613, b2_614, b2_615, b2_616, b2_617, b2_618, b2_619, b2_620, b2_621, b2_622, b2_623,
             b2_624, b2_625, b2_626, b2_627, b2_628, b2_629, b2_630, b2_631, b2_632, b2_633, b2_634, b2_635, b2_636, b2_637, b2_638, b2_639, b2_640,
             b2_641, b2_642, b2_643, b2_644, b2_645, b2_646, b2_647, b2_648, b2_649, b2_650, b2_651, b2_652, b2_653, b2_654, b2_655, b2_656, b2_657,
             b2_658, b2_659, b2_660, b2_661, b2_662, b2_663, b2_664, b2_665, b2_666, b2_667, b2_668, b2_669, b2_670, b2_671, b2_672, b2_673, b2_674,
             b2_675, b2_676, b2_677, b2_678, b2_679, b2_680, b2_681, b2_682, b2_683, b2_684, b2_685, b2_686, b2_687, b2_688, b2_689, b2_690, b2_691,
             b2_692, b2_693, b2_694, b2_695, b2_696, b2_697, b2_698, b2_699, b2_700, b2_701, b2_702, b2_703, b2_704, b2_705, b2_706, b2_707, b2_708,
             b2_709, b2_710, b2_711, b2_712, b2_713, b2_714, b2_715, b2_716, b2_717, b2_718, b2_719, b2_720, b2_721, b2_722, b2_723, b2_724, b2_725,
             b2_726, b2_727, b2_728, b2_729, b2_730, b2_731, b2_732, b2_733, b2_734, b2_735, b2_736, b2_737, b2_738, b2_739, b2_740, b2_741, b2_742,
             b2_743, b2_744, b2_745, b2_746, b2_747, b2_748, b2_749, b2_750, b2_751, b2_752, b2_753, b2_754, b2_755, b2_756, b2_757, b2_758, b2_759,
             b2_760, b2_761, b2_762, b2_763, b2_764, b2_765, b2_766, b2_767, b2_768, b2_769, b2_770, b2_771, b2_772, b2_773, b2_774, b2_775, b2_776,
             b2_777, b2_778, b2_779, b2_780, b2_781, b2_782, b2_783, b2_784, b2_785, b2_786, b2_787, b2_788, b2_789, b2_790, b2_791, b2_792, b2_793,
             b2_794, b2_795, b2_796, b2_797, b2_798, b2_799, b2_800, b2_801, b2_802, b2_803, b2_804, b2_805, b2_806, b2_807, b2_808, b2_809, b2_810,
             b2_811, b2_812, b2_813, b2_814, b2_815, b2_816, b2_817, b2_818, b2_819, b2_820, b2_821, b2_822, b2_823, b2_824, b2_825, b2_826, b2_827,
             b2_828, b2_829, b2_830, b2_831, b2_832, b2_833, b2_834, b2_835};

    srand(time(NULL));
    word = VecB2[rand()%(VecB2.size())];
    for (int i = 0; i < word.getWordlength(); ++i) {
        if (i == word.getWordlength()-1) {
            displayWord += "_";
        } else {
            displayWord += "_ ";
        }
    }
    //displayWord += word.getWord();
    ui->wordlabel->setText(QString::fromStdString(displayWord));
    ui->poslabel2->setText(QString::fromStdString(word.getPartofSpeech()));
    CurrentScoreB2 += 10;
    ui->scorelabel->setText(QString::fromStdString("Score: " + std::to_string(CurrentScoreB2)));
}

HangmanB2_game::~HangmanB2_game()
{
    delete ui;
}

void HangmanB2_game::on_AButton_clicked()
{
    ui->AButton->setEnabled(false);
    checkChar('a');
}

void HangmanB2_game::on_BButton_clicked()
{
    ui->BButton->setEnabled(false);
    checkChar('b');
}


void HangmanB2_game::on_CButton_clicked()
{
    ui->CButton->setEnabled(false);
    checkChar('c');
}


void HangmanB2_game::on_DButton_clicked()
{
    ui->DButton->setEnabled(false);
    checkChar('d');
}


void HangmanB2_game::on_EButton_clicked()
{
    ui->EButton->setEnabled(false);
    checkChar('e');
}


void HangmanB2_game::on_FButton_clicked()
{
    ui->FButton->setEnabled(false);
    checkChar('f');
}


void HangmanB2_game::on_GButton_clicked()
{
    ui->GButton->setEnabled(false);
    checkChar('g');
}


void HangmanB2_game::on_HButton_clicked()
{
    ui->HButton->setEnabled(false);
    checkChar('h');
}


void HangmanB2_game::on_IButton_clicked()
{
    ui->IButton->setEnabled(false);
    checkChar('i');
}


void HangmanB2_game::on_JButton_clicked()
{
    ui->JButton->setEnabled(false);
    checkChar('j');
}


void HangmanB2_game::on_KButton_clicked()
{
    ui->KButton->setEnabled(false);
    checkChar('k');
}


void HangmanB2_game::on_LButton_clicked()
{
    ui->LButton->setEnabled(false);
    checkChar('l');
}


void HangmanB2_game::on_MButton_clicked()
{
    ui->MButton->setEnabled(false);
    checkChar('m');
}


void HangmanB2_game::on_NButton_clicked()
{
    ui->NButton->setEnabled(false);
    checkChar('n');
}


void HangmanB2_game::on_OButton_clicked()
{
    ui->OButton->setEnabled(false);
    checkChar('o');
}


void HangmanB2_game::on_PButton_clicked()
{
    ui->PButton->setEnabled(false);
    checkChar('p');
}


void HangmanB2_game::on_QButton_clicked()
{
    ui->QButton->setEnabled(false);
    checkChar('q');
}


void HangmanB2_game::on_RButton_clicked()
{
    ui->RButton->setEnabled(false);
    checkChar('r');
}


void HangmanB2_game::on_SButton_clicked()
{
    ui->SButton->setEnabled(false);
    checkChar('s');
}


void HangmanB2_game::on_TButton_clicked()
{
    ui->TButton->setEnabled(false);
    checkChar('t');
}


void HangmanB2_game::on_UButton_clicked()
{
    ui->UButton->setEnabled(false);
    checkChar('u');
}


void HangmanB2_game::on_VButton_clicked()
{
    ui->VButton->setEnabled(false);
    checkChar('v');
}


void HangmanB2_game::on_WButton_clicked()
{
    ui->WButton->setEnabled(false);
    checkChar('w');
}


void HangmanB2_game::on_XButton_clicked()
{
    ui->XButton->setEnabled(false);
    checkChar('x');
}


void HangmanB2_game::on_YButton_clicked()
{
    ui->YButton->setEnabled(false);
    checkChar('y');
}


void HangmanB2_game::on_ZButton_clicked()
{
    ui->ZButton->setEnabled(false);
    checkChar('z');
}

void HangmanB2_game::checkChar(char chr) {
    QPixmap hang1("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang1");
    QPixmap hang2("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang2");
    QPixmap hang3("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang3");
    QPixmap hang4("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang4");
    QPixmap hang5("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang5");
    QPixmap hang6("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang6");
    QPixmap hang7("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang7");
    QPixmap hang8("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang8");
    QPixmap hang9("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang9");
    QPixmap hang10("/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Hangman/hang10");
    bool found = false;
    for (int i = 0; i < word.getWordlength(); ++i) {
        if (word.getWord()[i] == chr) {
            displayWord[i*2] = chr;
            found = true;
            ++FullWordB2;
        }
    }
    if (!found) {
        ++HangB2;
        --CurrentScoreB2;
        ui->scorelabel->setText(QString::fromStdString("Score: " + std::to_string(CurrentScoreB2)));
        switch (HangB2) {
        case 1 :
            ui->hangmanpic->setPixmap(hang1);
            break;
        case 2 :
            ui->hangmanpic->setPixmap(hang2);
            break;
        case 3 :
            ui->hangmanpic->setPixmap(hang3);
            break;
        case 4 :
            ui->hangmanpic->setPixmap(hang4);
            break;
        case 5 :
            ui->hangmanpic->setPixmap(hang5);
            break;
        case 6 :
            ui->hangmanpic->setPixmap(hang6);
            break;
        case 7 :
            ui->hangmanpic->setPixmap(hang7);
            break;
        case 8 :
            ui->hangmanpic->setPixmap(hang8);
            break;
        case 9 :
            ui->hangmanpic->setPixmap(hang9);
            break;
        case 10 :
            ui->hangmanpic->setPixmap(hang10);
            qint64 playtime = timerHangmanB2.elapsed();
            member.addHangmanProgress(playtime, CurrentScoreB2, index);
            GameComplete HangmanB2Complete;
            HangmanB2Complete.setModal(true);
            HangmanB2Complete.setScore(CurrentScoreB2);
            HangmanB2Complete.setTime(playtime);
            HangmanB2Complete.exec();
            ui->hangmanpic->clear();
            CurrentScoreB2 = 0;
            HangB2 = 0;
            FullWordB2 = 0;
            HangmanB2_game::close();
            Hangman_game *hangmanWindow = new Hangman_game(member, index, this);
            hangmanWindow->show();
            break;
        }
    }
    ui->wordlabel->setText(QString::fromStdString(displayWord));
    ui->wordlabel->show();

    if (FullWordB2 == word.getWordlength()) {
        QMessageBox::information(this, "Congratulations!", "You've guessed the word!");

        FullWordB2 = 0;
        word = VecB2[rand()%(VecB2.size())];
        displayWord = "";
        for (int i = 0; i < word.getWordlength(); ++i) {
            if (i == word.getWordlength()-1) {
                displayWord += "_";
            } else {
                displayWord += "_ ";
            }
        }
        //displayWord += word.getWord();
        ui->wordlabel->setText(QString::fromStdString(displayWord));
        ui->poslabel2->setText(QString::fromStdString(word.getPartofSpeech()));

        CurrentScoreB2 += 10;
        ui->scorelabel->setText(QString::fromStdString("Score: " + std::to_string(CurrentScoreB2)));

        QList<QPushButton *> buttons = this->findChildren<QPushButton *>();
        for (QPushButton *button : buttons) {
            button->setEnabled(true);
        }
    }
}

void HangmanB2_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        HangmanB2_game::close();
        Hangman_game *hangmanWindow = new Hangman_game(member, index, this);
        hangmanWindow->show();
    }
}
