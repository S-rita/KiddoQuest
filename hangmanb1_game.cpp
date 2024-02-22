#include "hangmanb1_game.h"
#include "ui_hangmanb1_game.h"
#include "hangman_game.h"
#include "word.h"
#include "gamecomplete.h"
#include <vector>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QPixmap>

int CurrentScoreB1 = 0;
int HangB1 = 0;
int FullWordB1 = 0;
QElapsedTimer timerHangmanB1;

HangmanB1_game::HangmanB1_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HangmanB1_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
    timerHangmanB1.start();

    Word b1_1("absolutely", "adverb");
    Word b1_2("academic", "adjective");
    Word b1_3("access", "noun");
    Word b1_4("access", "verb");
    Word b1_5("accommodation", "noun");
    Word b1_6("account", "noun");
    Word b1_7("achievement", "noun");
    Word b1_8("act", "noun");
    Word b1_9("ad", "noun");
    Word b1_10("addition", "noun");
    Word b1_11("admire", "verb");
    Word b1_12("admit", "verb");
    Word b1_13("advanced", "adjective");
    Word b1_14("advise", "verb");
    Word b1_15("afford", "verb");
    Word b1_16("age", "verb");
    Word b1_17("aged", "adjective");
    Word b1_18("agent", "noun");
    Word b1_19("agreement", "noun");
    Word b1_20("ahead", "adverb");
    Word b1_21("aim", "noun");
    Word b1_22("aim", "verb");
    Word b1_23("alarm", "noun");
    Word b1_24("album", "noun");
    Word b1_25("alcohol", "noun");
    Word b1_26("alcoholic", "adjective");
    Word b1_27("alternative", "adjective");
    Word b1_28("amazed", "adjective");
    Word b1_29("ambition", "noun");
    Word b1_30("ambitious", "adjective");
    Word b1_31("analyse", "verb");
    Word b1_32("analysis", "noun");
    Word b1_33("announce", "verb");
    Word b1_34("announcement", "noun");
    Word b1_35("annoyed", "adjective");
    Word b1_36("annoying", "adjective");
    Word b1_37("apart", "adverb");
    Word b1_38("apologize", "verb");
    Word b1_39("application", "noun");
    Word b1_40("appointment", "noun");
    Word b1_41("appreciate", "verb");
    Word b1_42("approxiamately", "adverb");
    Word b1_43("arrest", "noun");
    Word b1_44("arrest", "verb");
    Word b1_45("arrival", "noun");
    Word b1_46("assignment", "noun");
    Word b1_47("assist", "verb");
    Word b1_48("atmosphere", "noun");
    Word b1_49("attach", "verb");
    Word b1_50("attitude", "noun");
    Word b1_51("attract", "verb");
    Word b1_52("attraction", "noun");
    Word b1_53("authority", "noun");
    Word b1_54("average", "verb");
    Word b1_55("award", "verb");
    Word b1_56("aware", "adjective");
    Word b1_57("backwards", "adverb");
    Word b1_58("bake", "verb");
    Word b1_59("balance", "noun");
    Word b1_60("balance", "verb");
    Word b1_61("ban", "noun");
    Word b1_62("ban", "verb");
    Word b1_63("base", "noun");
    Word b1_64("base", "verb");
    Word b1_65("basic", "adjective");
    Word b1_66("basis", "noun");
    Word b1_67("battery", "noun");
    Word b1_68("battle", "noun");
    Word b1_69("beauty", "noun");
    Word b1_70("bee", "noun");
    Word b1_71("belief", "noun");
    Word b1_72("bell", "noun");
    Word b1_73("bend", "noun");
    Word b1_74("bend", "verb");
    Word b1_75("benefit", "verb");
    Word b1_76("better", "noun");
    Word b1_77("bite", "noun");
    Word b1_78("bite", "verb");
    Word b1_79("block", "noun");
    Word b1_80("block", "verb");
    Word b1_81("board", "verb");
    Word b1_82("bomb", "noun");
    Word b1_83("bomb", "verb");
    Word b1_84("border", "noun");
    Word b1_85("bother", "verb");
    Word b1_86("branch", "noun");
    Word b1_87("brand", "noun");
    Word b1_88("brand", "verb");
    Word b1_89("brave", "adjective");
    Word b1_90("breath", "noun");
    Word b1_91("breathe", "verb");
    Word b1_92("breathing", "noun");
    Word b1_93("bride", "noun");
    Word b1_94("bubble", "noun");
    Word b1_95("bury", "verb");
    Word b1_96("by", "adverb");
    Word b1_97("calm", "noun");
    Word b1_98("calm", "verb");
    Word b1_99("campaign", "noun");
    Word b1_100("campaign", "verb");
    Word b1_101("campus", "noun");
    Word b1_102("candidate", "noun");
    Word b1_103("cap", "noun");
    Word b1_104("captain", "noun");
    Word b1_105("careless", "adjective");
    Word b1_106("category", "noun");
    Word b1_107("ceiling", "noun");
    Word b1_108("celebration", "noun");
    Word b1_109("central", "adjective");
    Word b1_110("centre", "verb");
    Word b1_111("ceremony", "noun");
    Word b1_112("chain", "noun");
    Word b1_113("challenge", "noun");
    Word b1_114("champion", "noun");
    Word b1_115("channel", "noun");
    Word b1_116("chapter", "noun");
    Word b1_117("charge", "noun");
    Word b1_118("charge", "verb");
    Word b1_119("cheap", "adverb");
    Word b1_120("cheat", "noun");
    Word b1_121("cheat", "verb");
    Word b1_122("chemical", "adjective");
    Word b1_123("chemical", "noun");
    Word b1_124("chest", "noun");
    Word b1_125("childhood", "noun");
    Word b1_126("claim", "noun");
    Word b1_127("claim", "verb");
    Word b1_128("clause", "noun");
    Word b1_129("clear", "verb");
    Word b1_130("click", "noun");
    Word b1_131("click", "verb");
    Word b1_132("cilent", "noun");
    Word b1_133("climb", "noun");
    Word b1_134("close", "abverb");
    Word b1_135("cloth", "noun");
    Word b1_136("clue", "noun");
    Word b1_137("cloth", "verb");
    Word b1_138("coal", "noun");
    Word b1_139("coin", "noun");
    Word b1_140("collection", "noun");
    Word b1_141("coloured", "adjective");
    Word b1_142("combine", "verb");
    Word b1_143("comment", "verb");
    Word b1_144("commercial", "adjective");
    Word b1_145("commercial", "noun");
    Word b1_146("commit", "verb");
    Word b1_147("communication", "noun");
    Word b1_148("comparison", "noun");
    Word b1_149("competitive", "adjective");
    Word b1_150("competitor", "noun");
    Word b1_151("compaint", "noun");
    Word b1_152("complex", "adjective");
    Word b1_153("concentrate", "verb");
    Word b1_154("conclude", "verb");
    Word b1_155("conclusion", "noun");
    Word b1_156("confident", "adjective");
    Word b1_157("confirm", "verb");
    Word b1_158("confuse", "verb");
    Word b1_159("confused", "adjective");
    Word b1_160("connection", "noun");
    Word b1_161("consequence", "noun");
    Word b1_162("consist", "verb");
    Word b1_163("consume", "verb");
    Word b1_164("consumer", "noun");
    Word b1_165("contact", "noun");
    Word b1_166("contact", "verb");
    Word b1_167("container", "noun");
    Word b1_168("content", "noun");
    Word b1_169("continuous", "adjective");
    Word b1_170("contrast", "noun");
    Word b1_171("contrast", "verb");
    Word b1_172("convenient", "adjective");
    Word b1_173("convince", "verb");
    Word b1_174("cool", "verb");
    Word b1_175("costume", "noun");
    Word b1_176("cottage", "noun");
    Word b1_177("cotton", "noun");
    Word b1_178("count", "noun");
    Word b1_179("countryside", "noun");
    Word b1_180("court", "noun");
    Word b1_181("cover", "noun");
    Word b1_182("covered", "adjecctive");
    Word b1_183("cream", "adjective");
    Word b1_184("criminal", "adjective");
    Word b1_185("cruel", "adjective");
    Word b1_186("cultural", "adjective");
    Word b1_187("currency", "noun");
    Word b1_188("current", "adjective");
    Word b1_189("currently", "adverb");
    Word b1_190("curtain", "noun");
    Word b1_191("custom", "noun");
    Word b1_192("cut", "noun");
    Word b1_193("daily", "adverb");
    Word b1_194("damage", "noun");
    Word b1_195("damage", "verb");
    Word b1_196("deal", "noun");
    Word b1_197("decade", "noun");
    Word b1_198("decorate", "verb");
    Word b1_199("deep", "adverb");
    Word b1_200("define", "verb");
    Word b1_201("definite", "adjective");
    Word b1_202("definition", "noun");
    Word b1_203("deliver", "verb");
    Word b1_204("departure", "noun");
    Word b1_205("despite", "preposition");
    Word b1_206("destination", "noun");
    Word b1_207("determine", "verb");
    Word b1_208("determined", "adjective");
    Word b1_209("development", "noun");
    Word b1_210("diagram", "noun");
    Word b1_211("diamond", "noun");
    Word b1_212("difficulty", "noun");
    Word b1_213("direct", "adverb");
    Word b1_214("direct", "verb");
    Word b1_215("directly", "adverb");
    Word b1_216("dirt", "noun");
    Word b1_217("disadvantage", "noun");
    Word b1_218("disappointed", "adjective");
    Word b1_219("discount", "noun");
    Word b1_220("dislike", "noun");
    Word b1_221("dislike", "verb");
    Word b1_222("divide", "verb");
    Word b1_223("documentary", "noun");
    Word b1_224("donate", "verb");
    Word b1_225("double", "adverb");
    Word b1_226("doubt", "noun");
    Word b1_227("doubt", "verb");
    Word b1_228("dressed", "adjective");
    Word b1_229("drop", "noun");
    Word b1_230("drum", "noun");
    Word b1_231("drunk", "adjective");
    Word b1_232("due", "adjective");
    Word b1_233("dust", "noun");
    Word b1_234("duty", "noun");
    Word b1_235("earthquake", "noun");
    Word b1_236("eastern", "adjective");
    Word b1_237("economic", "adjective");
    Word b1_238("economy", "noun");
    Word b1_239("edge", "noun");
    Word b1_240("editor", "noun");
    Word b1_241("educated", "adjective");
    Word b1_242("educational", "adjective");
    Word b1_243("effective", "adjective");
    Word b1_244("effectively", "adverb");
    Word b1_245("effort", "noun");
    Word b1_246("election", "noun");
    Word b1_247("element", "noun");
    Word b1_248("embarrassed", "adjective");
    Word b1_249("embarrassing", "adjective");
    Word b1_250("emergency", "noun");
    Word b1_251("emotion", "noun");
    Word b1_252("employment", "noun");
    Word b1_253("empty", "verb");
    Word b1_254("encourage", "verb");
    Word b1_255("enemy", "noun");
    Word b1_256("engaged", "adjective");
    Word b1_257("engineering", "noun");
    Word b1_258("entertain", "verb");
    Word b1_259("entertainment", "noun");
    Word b1_260("entrance", "noun");
    Word b1_261("entry", "noun");
    Word b1_262("environmental", "adjective");
    Word b1_263("episode", "noun");
    Word b1_264("equal", "adjective");
    Word b1_265("equal", "verb");
    Word b1_266("equally", "adverb");
    Word b1_267("escape", "noun");
    Word b1_268("escape", "verb");
    Word b1_269("essential", "adjective");
    Word b1_270("eventually", "adverb");
    Word b1_271("examine", "verb");
    Word b1_272("except", "conjunction");
    Word b1_273("exchange", "noun");
    Word b1_274("exchange", "verb");
    Word b1_275("excitement", "noun");
    Word b1_276("exhibition", "noun");
    Word b1_277("expand", "verb");
    Word b1_278("expected", "adjection");
    Word b1_279("expedition", "noun");
    Word b1_280("experience", "verb");
    Word b1_281("experienced", "adjecctive");
    Word b1_282("experiment", "verb");
    Word b1_283("explode", "verb");
    Word b1_284("explore", "verb");
    Word b1_285("explosion", "noun");
    Word b1_286("export", "noun");
    Word b1_287("export", "verb");
    Word b1_288("extra", "adverb");
    Word b1_289("extra", "noun");
    Word b1_290("face", "verb");
    Word b1_291("fairly", "adverb");
    Word b1_292("familiar", "adjective");
    Word b1_293("fancy", "adjective");
    Word b1_294("fancy", "verb");
    Word b1_295("far", "adjective");
    Word b1_296("fascinating", "adjective");
    Word b1_297("fashionable", "adjective");
    Word b1_298("fasten", "verb");
    Word b1_299("favour", "noun");
    Word b1_300("fear", "verb");
    Word b1_301("feature", "verb");
    Word b1_302("fence", "noun");
    Word b1_303("fighting", "noun");
    Word b1_304("file", "noun");
    Word b1_305("financial", "adjective");
    Word b1_306("fire", "verb");
    Word b1_307("fitness", "noun");
    Word b1_308("fixed", "adjective");
    Word b1_309("flag", "noun");
    Word b1_310("flood", "noun");
    Word b1_311("flood", "verb");
    Word b1_312("flour", "noun");
    Word b1_313("flow", "noun");
    Word b1_314("flow", "verb");
    Word b1_315("fold", "verb");
    Word b1_316("folk", "adjective");
    Word b1_317("folk", "noun");
    Word b1_318("following", "noun");
    Word b1_319("force", "noyn");
    Word b1_320("force", "verb");
    Word b1_321("forever", "adverb");
    Word b1_322("frame", "noun");
    Word b1_323("frame", "verb");
    Word b1_324("freeze", "verb");
    Word b1_325("frequently", "adverb");
    Word b1_326("friendship", "noun");
    Word b1_327("frighten", "verb");
    Word b1_328("frightened", "adjective");
    Word b1_329("frozen", "adjective");
    Word b1_330("fry", "verb");
    Word b1_331("fuel", "noun");
    Word b1_332("function", "noun");
    Word b1_333("fur", "noun");
    Word b1_334("further", "abverb");
    Word b1_335("garage", "noun");
    Word b1_336("gather", "verb");
    Word b1_337("generally", "adverb");
    Word b1_338("generation", "noun");
    Word b1_339("generous", "adjective");
    Word b1_340("gentle", "adjective");
    Word b1_341("gentleman", "noun");
    Word b1_342("ghost", "noun");
    Word b1_343("giant", "adjective");
    Word b1_344("giant", "noun");
    Word b1_345("glad", "adjective");
    Word b1_346("global", "adjective");
    Word b1_347("glove", "noun");
    Word b1_348("go", "noun");
    Word b1_349("goods", "noun");
    Word b1_350("grade", "noun");
    Word b1_351("graduate", "noun");
    Word b1_352("graduate", "verb");
    Word b1_353("growth", "noun");
    Word b1_354("guard", "noun");
    Word b1_355("guilty", "adjective");
    Word b1_356("hand", "verb");
    Word b1_357("hang", "verb");
    Word b1_358("happiness", "noun");
    Word b1_359("hardly", "adverb");
    Word b1_360("hate", "noun");
    Word b1_361("head", "verb");
    Word b1_362("headline", "noun");
    Word b1_363("heating", "noun");
    Word b1_364("heavily", "adverb");
    Word b1_365("helicopter", "noun");
    Word b1_366("highlight", "verb");
    Word b1_367("highly", "adverb");
    Word b1_368("hire", "verb");
    Word b1_369("historic", "adjective");
    Word b1_370("historical", "adjective");
    Word b1_371("honest", "adjective");
    Word b1_372("horrible", "adjective");
    Word b1_373("horror", "noun");
    Word b1_374("host", "noun");
    Word b1_375("hunt", "verb");
    Word b1_376("hurricane", "noun");
    Word b1_377("hurry", "noun");
    Word b1_378("hurry", "verb");
    Word b1_379("identity", "noun");
    Word b1_380("ignore", "verb");
    Word b1_381("illegal", "adjective");
    Word b1_382("imaginary", "adjecctive");
    Word b1_383("immediate", "adjective");
    Word b1_384("immigrant", "noun");
    Word b1_385("impact", "noun");
    Word b1_386("impact", "verb");
    Word b1_387("import", "noun");
    Word b1_388("import", "verb");
    Word b1_389("importance", "noun");
    Word b1_390("impression", "noun");
    Word b1_391("impressive", "adjective");
    Word b1_392("improvement", "noun");
    Word b1_393("incredibly", "adverb");
    Word b1_394("indeed", "adverb");
    Word b1_395("indicate", "verb");
    Word b1_396("indirect", "adjective");
    Word b1_397("indoor", "adjective");
    Word b1_398("indoors", "adverb");
    Word b1_399("influence", "noun");
    Word b1_400("ingredient", "noun");
    Word b1_401("injure", "verb");
    Word b1_402("injured", "adjective");
    Word b1_403("innocent", "adjective");
    Word b1_404("intelligence", "noun");
    Word b1_405("intend", "verb");
    Word b1_406("intention", "noun");
    Word b1_407("invest", "verb");
    Word b1_408("investigate", "verb");
    Word b1_409("involved", "adjective");
    Word b1_410("iron", "noun");
    Word b1_411("iron", "verb");
    Word b1_412("issue", "noun");
    Word b1_413("journal", "noun");
    Word b1_414("judge", "noun");
    Word b1_415("judge", "verb");
    Word b1_416("keen", "adjective");
    Word b1_417("key", "verb");
    Word b1_418("keyboard", "noun");
    Word b1_419("kick", "noun");
    Word b1_420("kick", "verb");
    Word b1_421("killing", "noun");
    Word b1_422("kind", "adjective");
    Word b1_423("kiss", "noun");
    Word b1_424("kiss", "verb");
    Word b1_425("knock", "noun");
    Word b1_426("label", "noun");
    Word b1_427("label", "verb");
    Word b1_428("laboratory", "noun");
    Word b1_429("lack", "noun");
    Word b1_430("lack", "verb");
    Word b1_431("latest", "adjective");
    Word b1_432("lay", "verb");
    Word b1_433("layer", "noun");
    Word b1_434("lead", "noun");
    Word b1_435("leading", "aadjective");
    Word b1_436("leaf", "noun");
    Word b1_437("leather", "noun");
    Word b1_438("legal", "adjective");
    Word b1_439("leisure", "noun");
    Word b1_440("length", "noun");
    Word b1_441("level", "adjective");
    Word b1_442("lie", "noun");
    Word b1_443("lie", "verb");
    Word b1_444("like", "noun");
    Word b1_445("limit", "noun");
    Word b1_446("limit", "verb");
    Word b1_447("lip", "noun");
    Word b1_448("liquid", "adjective");
    Word b1_449("liquid", "noun");
    Word b1_450("literature", "noun");
    Word b1_451("live", "adjective");
    Word b1_452("live", "adverb");
    Word b1_453("living", "adjective");
    Word b1_454("living", "noun");
    Word b1_455("local", "noun");
    Word b1_456("locate", "verb");
    Word b1_457("located", "adjective");
    Word b1_458("location", "noun");
    Word b1_459("lonely", "adjective");
    Word b1_460("loss", "noun");
    Word b1_461("luxury", "adjective");
    Word b1_462("luxury", "noun");
    Word b1_463("mad", "adjective");
    Word b1_464("magic", "adjective");
    Word b1_465("magic", "noun");
    Word b1_466("mainly", "adverb");
    Word b1_467("mall", "noun");
    Word b1_468("management", "noun");
    Word b1_469("market", "verb");
    Word b1_470("marketing", "noun");
    Word b1_471("marriage", "noun");
    Word b1_472("meanwhile", "adverb");
    Word b1_473("measure", "noun");
    Word b1_474("measure", "verb");
    Word b1_475("medium", "adjective");
    Word b1_476("mental", "adjective");
    Word b1_477("mention", "noun");
    Word b1_478("mess", "noun");
    Word b1_479("mild", "adjective");
    Word b1_480("mine", "noun");
    Word b1_481("mix", "noun");
    Word b1_482("mix", "verb");
    Word b1_483("mixture", "noun");
    Word b1_484("mood", "noun");
    Word b1_485("move", "noun");
    Word b1_486("mud", "noun");
    Word b1_487("murder", "noun");
    Word b1_488("murder", "verb");
    Word b1_489("muscle", "noun");
    Word b1_490("musical", "noun");
    Word b1_491("mystery", "noun");
    Word b1_492("nail", "noun");
    Word b1_493("narrative", "adjective");
    Word b1_494("narrative", "noun");
    Word b1_495("nation", "noun");
    Word b1_496("native", "adjective");
    Word b1_497("native", "noun");
    Word b1_498("naturally", "adverb");
    Word b1_499("necessarily", "adverb");
    Word b1_500("need", "verb");
    Word b1_501("needle", "noun");
    Word b1_502("neighbourhood", "noun");
    Word b1_503("neither", "adverb");
    Word b1_504("net", "noun");
    Word b1_505("next", "noun");
    Word b1_506("nor", "adverb");
    Word b1_507("nor", "conjuction");
    Word b1_508("normal", "noun");
    Word b1_509("northen", "adjective");
    Word b1_510("note", "verb");
    Word b1_511("now", "conjuction");
    Word b1_512("nuclear", "adjective");
    Word b1_513("obvious", "adjective");
    Word b1_514("obviously", "adverb");
    Word b1_515("occasion", "noun");
    Word b1_516("occur", "verb");
    Word b1_517("odd", "adjective");
    Word b1_518("official", "adjective");
    Word b1_519("old-fashioned", "adjective");
    Word b1_520("once", "conjuction");
    Word b1_521("operation", "noun");
    Word b1_522("organized", "adjective");
    Word b1_523("chemical", "noun");
    Word b1_524("organizer", "noun");
    Word b1_525("original", "noun");
    Word b1_526("originally", "adverb");
    Word b1_527("ought", "verb");
    Word b1_528("ours", "pronoun");
    Word b1_529("outdoor", "adjective");
    Word b1_530("outdoors", "adverbs");
    Word b1_531("pack", "noun");
    Word b1_532("package", "noun");
    Word b1_533("painful", "adjective");
    Word b1_534("pale", "adjective");
    Word b1_535("pan", "noun");
    Word b1_536("participate", "verb");
    Word b1_537("particularly", "adverb");
    Word b1_538("pass", "noun");
    Word b1_539("passion", "noun");
    Word b1_540("path", "noun");
    Word b1_541("payment", "noun");
    Word b1_542("peaceful", "adjective");
    Word b1_543("percentage", "noun");
    Word b1_544("perfectly", "adjective");
    Word b1_545("performance", "noun");
    Word b1_546("personally", "adverb");
    Word b1_547("persuade", "verb");
    Word b1_548("photographer", "noun");
    Word b1_549("photography", "noun");
    Word b1_550("pin", "noun");
    Word b1_551("pin", "verb");
    Word b1_552("pipe", "noun");
    Word b1_553("place", "verb");
    Word b1_554("planning", "noun");
    Word b1_555("plesant", "adjective");
    Word b1_556("pleasure", "noun");
    Word b1_557("plenty", "pronoun");
    Word b1_558("plot", "noun");
    Word b1_559("confused", "preposition");
    Word b1_560("poem", "noun");
    Word b1_561("poet", "noun");
    Word b1_562("poetry", "noun");
    Word b1_563("point", "verb");
    Word b1_564("poison", "noun");
    Word b1_565("poison", "verb");
    Word b1_566("poisonous", "adjective");
    Word b1_567("policy", "noun");
    Word b1_568("political", "adjective");
    Word b1_569("politician", "noun");
    Word b1_570("politics", "noun");
    Word b1_571("port", "noun");
    Word b1_572("portrait", "noun");
    Word b1_573("possibly", "adverb");
    Word b1_574("pot", "noun");
    Word b1_575("pour", "verb");
    Word b1_576("poverty", "noun");
    Word b1_577("powder", "noun");
    Word b1_578("powerful", "adjecctive");
    Word b1_579("practical", "adjecctive");
    Word b1_580("pray", "verb");
    Word b1_581("prayer", "noun");
    Word b1_582("prepared", "adjecctive");
    Word b1_583("presentation", "noun");
    Word b1_584("press", "noun");
    Word b1_585("press", "verb");
    Word b1_586("pressure", "noun");
    Word b1_587("pretend", "verb");
    Word b1_588("previous", "adjective");
    Word b1_589("previously", "adverb");
    Word b1_590("priest", "noun");
    Word b1_591("primary", "adjective");
    Word b1_592("prince", "noun");
    Word b1_593("princess", "noun");
    Word b1_594("printing", "noun");
    Word b1_595("prisoner", "noun");
    Word b1_596("private", "adjective");
    Word b1_597("producer", "noun");
    Word b1_598("production", "noun");
    Word b1_599("profession", "noun");
    Word b1_600("profit", "noun");
    Word b1_601("program", "verb");
    Word b1_602("promote", "verb");
    Word b1_603("proper", "adjective");
    Word b1_604("properly", "adverb");
    Word b1_605("property", "noun");
    Word b1_606("protest", "noun");
    Word b1_607("protest", "verb");
    Word b1_608("proud", "adjective");
    Word b1_609("prove", "verb");
    Word b1_610("pull", "noun");
    Word b1_611("punish", "verb");
    Word b1_612("punishment", "noun");
    Word b1_613("push", "noun");
    Word b1_614("qualification", "noun");
    Word b1_615("qualified", "adjective");
    Word b1_616("qualify", "verb");
    Word b1_617("queue", "noun");
    Word b1_618("queue", "verb");
    Word b1_619("quit", "verb");
    Word b1_620("quotation", "noun");
    Word b1_621("quote", "noun");
    Word b1_622("quote", "verb");
    Word b1_623("racing", "noun");
    Word b1_624("range", "noun");
    Word b1_625("rare", "adjective");
    Word b1_626("rarely", "adverb");
    Word b1_627("reaction", "noun");
    Word b1_628("reality", "noun");
    Word b1_629("receipt", "noun");
    Word b1_630("recommendation", "noun");
    Word b1_631("reference", "noun");
    Word b1_632("reflect", "verb");
    Word b1_633("regularly", "adverb");
    Word b1_634("reject", "verb");
    Word b1_635("relate", "verb");
    Word b1_636("related", "adjective");
    Word b1_637("relation", "noun");
    Word b1_638("relative", "adjective");
    Word b1_639("relative", "noun");
    Word b1_640("relaxed", "adjective");
    Word b1_641("relaxing", "adjective");
    Word b1_642("release", "noun");
    Word b1_643("release", "verb");
    Word b1_644("reliable", "adjective");
    Word b1_645("religion", "noun");
    Word b1_646("religious", "adjective");
    Word b1_647("remain", "verb");
    Word b1_648("remind", "verb");
    Word b1_649("remote", "adjective");
    Word b1_650("rent", "noun");
    Word b1_651("rent", "verb");
    Word b1_652("repair", "noun");
    Word b1_653("repeat", "noun");
    Word b1_654("repeated", "adjective");
    Word b1_655("represent", "verb");
    Word b1_656("request", "verb");
    Word b1_657("require", "verb");
    Word b1_658("reservation", "noun");
    Word b1_659("resource", "noun");
    Word b1_660("respect", "noun");
    Word b1_661("respect", "verb");
    Word b1_662("responsibility", "noun");
    Word b1_663("responsible", "adjective");
    Word b1_664("result", "verb");
    Word b1_665("retire", "verb");
    Word b1_666("retired", "adjective");
    Word b1_667("revise", "verb");
    Word b1_668("rise", "noun");
    Word b1_669("risk", "noun");
    Word b1_670("risk", "verb");
    Word b1_671("robot", "noun");
    Word b1_672("roll", "noun");
    Word b1_673("roll", "verb");
    Word b1_674("romantic", "adjection");
    Word b1_675("rope", "noun");
    Word b1_676("rough", "adjection");
    Word b1_677("row", "noun");
    Word b1_678("royal", "adjection");
    Word b1_679("rugby", "noun");
    Word b1_680("rule", "verb");
    Word b1_681("safety", "noun");
    Word b1_682("sail", "noun");
    Word b1_683("sailor", "noun");
    Word b1_684("sample", "noun");
    Word b1_685("sand", "noun");
    Word b1_686("scan", "verb");
    Word b1_687("scientific", "adjective");
    Word b1_688("script", "noun");
    Word b1_689("sculpture", "noun");
    Word b1_690("secondary", "adjective");
    Word b1_691("security", "noun");
    Word b1_692("seed", " noun");
    Word b1_693("sensible", "adjective");
    Word b1_694("separate", "verb");
    Word b1_695("seriously", "advefrb");
    Word b1_696("servant", "noun");
    Word b1_697("set", "noun");
    Word b1_698("set", "verb");
    Word b1_699("setting", "noun");
    Word b1_700("sex", "noun");
    Word b1_701("sexual", "adjective");
    Word b1_702("shake", "noun");
    Word b1_703("share", "noun");
    Word b1_704("sharp", "adjective");
    Word b1_705("shelf", "noun");
    Word b1_706("shell", "noun");
    Word b1_707("shift", "noun");
    Word b1_708("shine", "verb");
    Word b1_709("shiny", "adjective");
    Word b1_710("shoot", "verb");
    Word b1_711("shy", "adjective");
    Word b1_712("sight", "noun");
    Word b1_713("signal", "noun");
    Word b1_714("signal", "verb");
    Word b1_715("silent", "adjective");
    Word b1_716("silly", "adjective");
    Word b1_717("similarity", "noun");
    Word b1_718("similarly", "adverb");
    Word b1_719("simply", "adverb");
    Word b1_720("since", "adverb");
    Word b1_721("sink", "verb");
    Word b1_722("slice", "noun");
    Word b1_723("slice", "verb");
    Word b1_724("slightly", "adverb");
    Word b1_725("slow", "verb");
    Word b1_726("smart", "adjective");
    Word b1_727("smooth", "adjective");
    Word b1_728("software", "noun");
    Word b1_729("soil", "noun");
    Word b1_730("solid", "adjective");
    Word b1_731("solid", "noun");
    Word b1_732("sort", "verb");
    Word b1_733("southern", "adjective");
    Word b1_734("specifically", "abverb");
    Word b1_735("spending", "noun");
    Word b1_736("spicy", "adjective");
    Word b1_737("spirit", "noun");
    Word b1_738("spoken", "adjective");
    Word b1_739("spot", "noun");
    Word b1_740("spread", "verb");
    Word b1_741("stadium", "noun");
    Word b1_742("staff", "noun");
    Word b1_743("standard", " adjective");
    Word b1_744("standard", "noun");
    Word b1_745("state", "adjective");
    Word b1_746("state", "verb");
    Word b1_747("statistic", "noun");
    Word b1_748("statue", "noun");
    Word b1_749("stick", "noun");
    Word b1_750("stick", "verb");
    Word b1_751("still", "adjective");
    Word b1_752("store", "verb");
    Word b1_753("stranger", "noun");
    Word b1_754("strength", "noun");
    Word b1_755("string", "noun");
    Word b1_756("strongly", "adverb");
    Word b1_757("studio", "noun");
    Word b1_758("stuff", "noun");
    Word b1_759("substance", "noun");
    Word b1_760("successfully", "adverb");
    Word b1_761("sudden", "adjective");
    Word b1_762("suffer", "verb");
    Word b1_763("suit", "verb");
    Word b1_764("suitable", "adjective");
    Word b1_765("summarize", "verb");
    Word b1_766("summary", "noun");
    Word b1_767("supply", "noun");
    Word b1_768("supply", "verb");
    Word b1_769("supporter", "noun");
    Word b1_770("surely", "adverb");
    Word b1_771("surface", "noun");
    Word b1_772("survive", "verb");
    Word b1_773("swim", "noun");
    Word b1_774("switch", "verb");
    Word b1_775("symptom", "noun");
    Word b1_776("tail", "noun");
    Word b1_777("talent", "noun");
    Word b1_778("talented", "adjective");
    Word b1_779("tape", "noun");
    Word b1_780("tax", "noun");
    Word b1_781("tax", "verb");
    Word b1_782("technical", "adjecctive");
    Word b1_783("technique", "noun");
    Word b1_784("tend", "verb");
    Word b1_785("tent", "noun");
    Word b1_786("that", "adverb");
    Word b1_787("theirs", "pronoun");
    Word b1_788("theme", "noun");
    Word b1_789("theory", "noun");
    Word b1_790("therefore", "adverb");
    Word b1_791("this", "adverb");
    Word b1_792("though", "adverb");
    Word b1_793("though", " conjunction");
    Word b1_794("throat", "noun");
    Word b1_795("throughout", "adverb");
    Word b1_796("throughout", " preposition");
    Word b1_797("tight", "adjective");
    Word b1_798("till", " conjunction");
    Word b1_799("till", "preposition");
    Word b1_800("tin", "noun");
    Word b1_801("tiny", "adjective");
    Word b1_802("tip", "verb");
    Word b1_803("toe", "noun");
    Word b1_804("tongue", "noun");
    Word b1_805("total", "adjective");
    Word b1_806("total", "noun");
    Word b1_807("totally", "adverb");
    Word b1_808("touch", "noun");
    Word b1_809("tour", "verb");
    Word b1_810("trade", "noun");
    Word b1_811("trade", "verb");
    Word b1_812("translate", "verb");
    Word b1_813("translation", "noun");
    Word b1_814("transport", "verb");
    Word b1_815("treat", "verb");
    Word b1_816("treatment", "noun");
    Word b1_817("trend", "noun");
    Word b1_818("trick", "noun");
    Word b1_819("trick", "verb");
    Word b1_820("truth", "noun");
    Word b1_821("tube", "noun");
    Word b1_822("type", "verb");
    Word b1_823("typically", "adverb");
    Word b1_824("tyre", "noun");
    Word b1_825("ugly", "adjective");
    Word b1_826("unable", "adjective");
    Word b1_827("uncomfortable", "adjective");
    Word b1_828("underwear", "noun");
    Word b1_829("unemployed", "adjective");
    Word b1_830("unemployment", "noun");
    Word b1_831("unfair", "adjective");
    Word b1_832("union", "noun");
    Word b1_833("unless", "conjunction");
    Word b1_834("unlike", "preposition");
    Word b1_835("unlikely", "adjective");
    Word b1_836("unnecessary", "adjective");
    Word b1_837("unpleasant", "adjective");
    Word b1_838("update", "noun");
    Word b1_839("update", "verb");
    Word b1_840("upon", "preposition");
    Word b1_841("upset", "adjective");
    Word b1_842("upset", "verb");
    Word b1_843("used", "adjective");
    Word b1_844("valuable", "adjective");
    Word b1_845("value", "noun");
    Word b1_846("various", "adjective");
    Word b1_847("version", "noun");
    Word b1_848("victim", "noun");
    Word b1_849("view", "verb");
    Word b1_850("viewer", "noun");
    Word b1_851("violent", "adjective");
    Word b1_852("volunteer", "noun");
    Word b1_853("volunteer", "verb");
    Word b1_854("vote", "noun");
    Word b1_855("vote", "verb");
    Word b1_856("warm", "verb");
    Word b1_857("warn", "verb");
    Word b1_858("warning", "adjective");
    Word b1_859("waste", "noun");
    Word b1_860("waste", "verb");
    Word b1_861("waste", "noun");
    Word b1_862("water", "verb");
    Word b1_863("wave", "verb");
    Word b1_864("weapon", "noun");
    Word b1_865("weigh", "verb");
    Word b1_866("western", "adjective");
    Word b1_867("whatever", "determiner");
    Word b1_868("whatever", "pronoun");
    Word b1_869("whenever", "conjunction");
    Word b1_870("whether", "conjunction");
    Word b1_871("while", "noun");
    Word b1_872("whole", "noun");
    Word b1_873("will", "noun");
    Word b1_874("win", "noun");
    Word b1_875("wing", "noun");
    Word b1_876("within", "preposition");
    Word b1_877("wonder", "noun");
    Word b1_878("wonder", "verb");
    Word b1_879("wool", "noun");
    Word b1_880("worldwide", "adjecctive");
    Word b1_881("worldwide", "adverb");
    Word b1_882("worry", "noun");
    Word b1_883("worse", "adverb");
    Word b1_884("worst", "adverb");
    Word b1_885("worth", "adjective");
    Word b1_886("written", "adjective");
    Word b1_887("wrong", "noun");
    Word b1_888("yard", "noun");
    Word b1_889("youth", "noun");


    VecB1 = {b1_1, b1_2, b1_3, b1_4, b1_5, b1_6, b1_7, b1_8, b1_9, b1_10, b1_11, b1_12, b1_13, b1_14, b1_15,b1_16, b1_17, b1_18, b1_19,
             b1_20, b1_21, b1_22, b1_23, b1_24, b1_25, b1_26, b1_27, b1_28, b1_29, b1_30,b1_31, b1_32, b1_33, b1_34, b1_35, b1_36, b1_37,
             b1_38, b1_39, b1_40, b1_41, b1_42, b1_43, b1_44, b1_45, b1_46, b1_47, b1_48, b1_49, b1_50, b1_51, b1_52, b1_53, b1_54, b1_55,
             b1_56, b1_57, b1_58, b1_59, b1_60, b1_61, b1_62, b1_63, b1_64, b1_65, b1_66, b1_67, b1_68, b1_69, b1_70, b1_71, b1_72, b1_73,
             b1_74, b1_75, b1_76, b1_77, b1_78, b1_79, b1_80, b1_81, b1_82, b1_83, b1_84, b1_85, b1_86, b1_87, b1_88, b1_89, b1_90, b1_91,
             b1_92, b1_93, b1_94, b1_95, b1_96, b1_97, b1_98, b1_99, b1_100, b1_101, b1_102, b1_103, b1_104, b1_105, b1_106, b1_107, b1_108,
             b1_109, b1_110, b1_111, b1_112, b1_113, b1_114, b1_115, b1_116, b1_117, b1_118, b1_119, b1_120, b1_121, b1_122, b1_123, b1_124,
             b1_125, b1_126, b1_127, b1_128, b1_129, b1_130, b1_131, b1_132, b1_133, b1_134, b1_135, b1_136, b1_137, b1_138, b1_139, b1_140,
             b1_141, b1_142, b1_143, b1_144, b1_145, b1_146, b1_147, b1_148, b1_149, b1_150, b1_151, b1_152, b1_153, b1_154, b1_155, b1_156,
             b1_157, b1_158, b1_159, b1_160, b1_161, b1_162, b1_163, b1_164, b1_165, b1_166, b1_167, b1_168, b1_169, b1_170, b1_171, b1_172,
             b1_173, b1_174, b1_175, b1_176, b1_177, b1_178, b1_179, b1_180, b1_181, b1_182, b1_183, b1_184, b1_185, b1_186, b1_187, b1_188,
             b1_189, b1_190, b1_191, b1_192, b1_193, b1_194, b1_195, b1_196, b1_197, b1_198, b1_199, b1_200, b1_201, b1_202, b1_203, b1_204,
             b1_205, b1_206, b1_207, b1_208, b1_209, b1_210, b1_211, b1_212, b1_213, b1_214, b1_215, b1_216, b1_217, b1_218, b1_219, b1_220,
             b1_221, b1_222, b1_223, b1_224, b1_225, b1_226, b1_227, b1_228, b1_229, b1_230, b1_231, b1_232, b1_233, b1_234, b1_235, b1_236,
             b1_237, b1_238, b1_239, b1_240, b1_241, b1_242, b1_243, b1_244, b1_245, b1_246, b1_247, b1_248, b1_249, b1_250, b1_251, b1_252,
             b1_253, b1_254, b1_255, b1_256, b1_257, b1_258, b1_259, b1_260, b1_261, b1_262, b1_263, b1_264, b1_265, b1_266, b1_267, b1_268,
             b1_269, b1_270, b1_271, b1_272, b1_273, b1_274, b1_275, b1_276, b1_277, b1_278, b1_279, b1_280, b1_281, b1_282, b1_283, b1_284,
             b1_285, b1_286, b1_287, b1_288, b1_289, b1_290, b1_291, b1_292, b1_293, b1_294, b1_295, b1_296, b1_297, b1_298, b1_299, b1_300,
             b1_301, b1_302, b1_303, b1_304, b1_305, b1_306, b1_307, b1_308, b1_309, b1_310, b1_311, b1_312, b1_313, b1_314, b1_315, b1_316,
             b1_317, b1_318, b1_319, b1_320, b1_321, b1_322, b1_323, b1_324, b1_325, b1_326, b1_327, b1_328, b1_329, b1_330, b1_331, b1_332,
             b1_333, b1_334, b1_335, b1_336, b1_337, b1_338, b1_339, b1_340, b1_341, b1_342, b1_343, b1_344, b1_345, b1_346, b1_347, b1_348,
             b1_349, b1_350, b1_351, b1_352, b1_353, b1_354, b1_355, b1_356, b1_357, b1_358, b1_359, b1_360, b1_361, b1_362, b1_363, b1_364,
             b1_365, b1_366, b1_367, b1_368, b1_369, b1_370, b1_371, b1_372, b1_373, b1_374, b1_375, b1_376, b1_377, b1_378, b1_379, b1_380,
             b1_381, b1_382, b1_383, b1_384, b1_385, b1_386, b1_387, b1_388, b1_389, b1_390, b1_391, b1_392, b1_393, b1_394, b1_395, b1_396,
             b1_397, b1_398, b1_399, b1_400, b1_401, b1_402, b1_403, b1_404, b1_405, b1_406, b1_407, b1_408, b1_409, b1_410, b1_411, b1_412,
             b1_413, b1_414, b1_415, b1_416, b1_417, b1_418, b1_419, b1_420, b1_421, b1_422, b1_423, b1_424, b1_425, b1_426, b1_427, b1_428,
             b1_429, b1_430, b1_431, b1_432, b1_433, b1_434, b1_435, b1_436, b1_437, b1_438, b1_439, b1_440, b1_441, b1_442, b1_443, b1_444,
             b1_445, b1_446, b1_447, b1_448, b1_449, b1_450, b1_451, b1_452, b1_453, b1_454, b1_455, b1_456, b1_457, b1_458, b1_459, b1_460,
             b1_461, b1_462, b1_463, b1_464, b1_465, b1_466, b1_467, b1_468, b1_469,  b1_470, b1_471, b1_472, b1_473, b1_474, b1_475, b1_476,
             b1_477, b1_478, b1_479, b1_480, b1_481, b1_482, b1_483, b1_484, b1_485, b1_486, b1_487, b1_488, b1_489, b1_490, b1_491, b1_492,
             b1_493, b1_494, b1_495, b1_496, b1_497, b1_498, b1_499, b1_500, b1_501, b1_502, b1_503, b1_504, b1_505, b1_506, b1_507, b1_508,
             b1_509, b1_510, b1_511,  b1_512, b1_513, b1_514, b1_515, b1_516, b1_517, b1_518, b1_519, b1_520, b1_521, b1_522, b1_523, b1_524,
             b1_525, b1_526, b1_527, b1_528, b1_529, b1_530, b1_531, b1_532, b1_533, b1_534, b1_535, b1_536, b1_537, b1_538, b1_539, b1_540,
             b1_541, b1_542, b1_543, b1_544, b1_545, b1_546, b1_547, b1_548, b1_549, b1_550, b1_551, b1_552, b1_553, b1_554, b1_555, b1_556,
             b1_557, b1_558, b1_559, b1_560, b1_561, b1_562, b1_563, b1_564, b1_565, b1_566, b1_567, b1_568, b1_569, b1_570, b1_571, b1_572,
             b1_573, b1_574, b1_575, b1_576, b1_577, b1_578, b1_579, b1_580, b1_581, b1_582, b1_583, b1_584, b1_585, b1_586, b1_587, b1_588,
             b1_589, b1_590, b1_591, b1_592, b1_593, b1_594, b1_595, b1_596, b1_597, b1_598, b1_599, b1_600, b1_601, b1_602, b1_603, b1_604,
             b1_605, b1_606, b1_607, b1_608, b1_609, b1_610, b1_611, b1_612, b1_613, b1_614, b1_615, b1_616, b1_617, b1_618, b1_619, b1_620,
             b1_621, b1_622, b1_623, b1_624, b1_625, b1_626, b1_627, b1_628, b1_629, b1_630, b1_631, b1_632, b1_633, b1_634, b1_635, b1_636,
             b1_637, b1_638, b1_639, b1_640, b1_641, b1_642, b1_643, b1_644, b1_645, b1_646, b1_647, b1_648, b1_649, b1_650, b1_651, b1_652,
             b1_653, b1_654, b1_655, b1_656, b1_657, b1_658, b1_659, b1_660, b1_661, b1_662, b1_663, b1_664, b1_665, b1_666, b1_667, b1_668,
             b1_669, b1_670, b1_671, b1_672, b1_673, b1_674, b1_675, b1_676, b1_677, b1_678, b1_679, b1_680, b1_681, b1_682, b1_683, b1_684,
             b1_685, b1_686, b1_687, b1_688, b1_689, b1_690, b1_691, b1_692, b1_693, b1_694, b1_695, b1_696, b1_697, b1_698, b1_699, b1_700,
             b1_701, b1_702, b1_703, b1_704, b1_705, b1_706, b1_707, b1_708, b1_709, b1_710, b1_711, b1_712, b1_713, b1_714, b1_715, b1_716,
             b1_717, b1_718, b1_719, b1_720, b1_721, b1_722, b1_723, b1_724, b1_725, b1_726, b1_727, b1_728, b1_729, b1_730, b1_731, b1_732,
             b1_733, b1_734, b1_735, b1_736, b1_737, b1_738, b1_739, b1_740, b1_741, b1_742, b1_743, b1_744, b1_745, b1_746, b1_747, b1_748,
             b1_749, b1_750, b1_751, b1_752, b1_753, b1_754, b1_755, b1_756, b1_757, b1_758, b1_759, b1_760, b1_761, b1_762, b1_763, b1_764,
             b1_765, b1_766, b1_767, b1_768, b1_769, b1_770, b1_771, b1_772, b1_773, b1_774, b1_775, b1_776, b1_777, b1_778, b1_779, b1_780,
             b1_781, b1_782, b1_783, b1_784, b1_785, b1_786, b1_787, b1_788, b1_789, b1_790, b1_791, b1_792, b1_793, b1_794, b1_795, b1_796,
             b1_797, b1_798, b1_799, b1_800, b1_801, b1_802, b1_803, b1_804, b1_805, b1_806, b1_807, b1_808, b1_809, b1_810, b1_811, b1_812,
             b1_813, b1_814, b1_815, b1_816, b1_817, b1_818, b1_819, b1_820, b1_821, b1_822, b1_823, b1_824, b1_825, b1_826, b1_827, b1_828,
             b1_829, b1_830, b1_831, b1_832, b1_833, b1_834, b1_835, b1_836, b1_837, b1_838, b1_839, b1_840, b1_841, b1_842, b1_843, b1_844,
             b1_845, b1_846, b1_847, b1_848, b1_849, b1_850, b1_851, b1_852, b1_853, b1_854, b1_855, b1_856, b1_857, b1_858, b1_859, b1_860,
             b1_861, b1_862, b1_863, b1_864, b1_865, b1_866, b1_867, b1_868, b1_869, b1_870, b1_871, b1_872, b1_873, b1_874, b1_875, b1_876,
             b1_877, b1_878, b1_879, b1_880, b1_881, b1_882, b1_883, b1_884, b1_885, b1_886, b1_887, b1_888, b1_889};

    srand(time(NULL));
    word = VecB1[rand()%(VecB1.size())];
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
    CurrentScoreB1 += 10;
    ui->scorelabel->setText(QString::fromStdString("Score: " + std::to_string(CurrentScoreB1)));
}

HangmanB1_game::~HangmanB1_game()
{
    delete ui;
}

void HangmanB1_game::on_AButton_clicked()
{
    ui->AButton->setEnabled(false);
    checkChar('a');
}

void HangmanB1_game::on_BButton_clicked()
{
    ui->BButton->setEnabled(false);
    checkChar('b');
}


void HangmanB1_game::on_CButton_clicked()
{
    ui->CButton->setEnabled(false);
    checkChar('c');
}


void HangmanB1_game::on_DButton_clicked()
{
    ui->DButton->setEnabled(false);
    checkChar('d');
}


void HangmanB1_game::on_EButton_clicked()
{
    ui->EButton->setEnabled(false);
    checkChar('e');
}


void HangmanB1_game::on_FButton_clicked()
{
    ui->FButton->setEnabled(false);
    checkChar('f');
}


void HangmanB1_game::on_GButton_clicked()
{
    ui->GButton->setEnabled(false);
    checkChar('g');
}


void HangmanB1_game::on_HButton_clicked()
{
    ui->HButton->setEnabled(false);
    checkChar('h');
}


void HangmanB1_game::on_IButton_clicked()
{
    ui->IButton->setEnabled(false);
    checkChar('i');
}


void HangmanB1_game::on_JButton_clicked()
{
    ui->JButton->setEnabled(false);
    checkChar('j');
}


void HangmanB1_game::on_KButton_clicked()
{
    ui->KButton->setEnabled(false);
    checkChar('k');
}


void HangmanB1_game::on_LButton_clicked()
{
    ui->LButton->setEnabled(false);
    checkChar('l');
}


void HangmanB1_game::on_MButton_clicked()
{
    ui->MButton->setEnabled(false);
    checkChar('m');
}


void HangmanB1_game::on_NButton_clicked()
{
    ui->NButton->setEnabled(false);
    checkChar('n');
}


void HangmanB1_game::on_OButton_clicked()
{
    ui->OButton->setEnabled(false);
    checkChar('o');
}


void HangmanB1_game::on_PButton_clicked()
{
    ui->PButton->setEnabled(false);
    checkChar('p');
}


void HangmanB1_game::on_QButton_clicked()
{
    ui->QButton->setEnabled(false);
    checkChar('q');
}


void HangmanB1_game::on_RButton_clicked()
{
    ui->RButton->setEnabled(false);
    checkChar('r');
}


void HangmanB1_game::on_SButton_clicked()
{
    ui->SButton->setEnabled(false);
    checkChar('s');
}


void HangmanB1_game::on_TButton_clicked()
{
    ui->TButton->setEnabled(false);
    checkChar('t');
}


void HangmanB1_game::on_UButton_clicked()
{
    ui->UButton->setEnabled(false);
    checkChar('u');
}


void HangmanB1_game::on_VButton_clicked()
{
    ui->VButton->setEnabled(false);
    checkChar('v');
}


void HangmanB1_game::on_WButton_clicked()
{
    ui->WButton->setEnabled(false);
    checkChar('w');
}


void HangmanB1_game::on_XButton_clicked()
{
    ui->XButton->setEnabled(false);
    checkChar('x');
}


void HangmanB1_game::on_YButton_clicked()
{
    ui->YButton->setEnabled(false);
    checkChar('y');
}


void HangmanB1_game::on_ZButton_clicked()
{
    ui->ZButton->setEnabled(false);
    checkChar('z');
}

void HangmanB1_game::checkChar(char chr) {
    QPixmap hang1("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang1");
    QPixmap hang2("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang2");
    QPixmap hang3("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang3");
    QPixmap hang4("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang4");
    QPixmap hang5("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang5");
    QPixmap hang6("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang6");
    QPixmap hang7("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang7");
    QPixmap hang8("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang8");
    QPixmap hang9("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang9");
    QPixmap hang10("C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Hangman/hang10");
    bool found = false;
    for (int i = 0; i < word.getWordlength(); ++i) {
        if (word.getWord()[i] == chr) {
            displayWord[i*2] = chr;
            found = true;
            ++FullWordB1;
        }
    }
    if (!found) {
        ++HangB1;
        --CurrentScoreB1;
        ui->scorelabel->setText(QString::fromStdString("Score: " + std::to_string(CurrentScoreB1)));
        switch (HangB1) {
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
            qint64 playtime = timerHangmanB1.elapsed();
            member.addHangmanProgress(playtime, CurrentScoreB1, index);
            GameComplete HangmanB1Complete;
            HangmanB1Complete.setModal(true);
            HangmanB1Complete.setScore(CurrentScoreB1);
            HangmanB1Complete.setTime(playtime);
            HangmanB1Complete.exec();
            CurrentScoreB1 = 0;
            HangB1 = 0;
            FullWordB1 = 0;
            ui->hangmanpic->clear();
            HangmanB1_game::close();
            Hangman_game *hangmanWindow = new Hangman_game(member, index, this);
            hangmanWindow->show();
            break;
        }
    }
    ui->wordlabel->setText(QString::fromStdString(displayWord));
    ui->wordlabel->show();

    if (FullWordB1 == word.getWordlength()) {
        QMessageBox::information(this, "Congratulations!", "You've guessed the word!");

        FullWordB1 = 0;
        word = VecB1[rand()%(VecB1.size())];
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

        CurrentScoreB1 += 10;
        ui->scorelabel->setText(QString::fromStdString("Score: " + std::to_string(CurrentScoreB1)));

        QList<QPushButton *> buttons = this->findChildren<QPushButton *>();
        for (QPushButton *button : buttons) {
            button->setEnabled(true);
        }
    }
}


