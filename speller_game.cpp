#include "speller_game.h"
#include "ui_speller_game.h"
#include "englishwindow.h"

Speller_game::Speller_game(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Speller_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);

    Objects a1("alligator", ":/image for c++ project/English/Speller/Animals/alligator.jpeg");
    Objects a2("anaconda", ":/image for c++ project/English/Speller/Animals/anaconda.jpeg");
    Objects a3("angelshark", ":/image for c++ project/English/Speller/Animals/angelshark.jpeg");
    Objects a4("ant", ":/image for c++ project/English/Speller/Animals/ant.jpeg");
    Objects a5("anteater", ":/image for c++ project/English/Speller/Animals/anteater.jpeg");
    Objects a6("antelope", ":/image for c++ project/English/Speller/Animals/antelope.jpeg");
    Objects a7("arctic fox", ":/image for c++ project/English/Speller/Animals/arctic fox.jpeg");
    Objects a8("arctic wolf", ":/image for c++ project/English/Speller/Animals/arctic wolf.jpeg");
    Objects a9("armadillo", ":/image for c++ project/English/Speller/Animals/armadillo.jpeg");
    Objects a10("baboon", ":/image for c++ project/English/Speller/Animals/baboon.jpeg");
    Objects a11("badger", ":/image for c++ project/English/Speller/Animals/badger.jpeg");
    Objects a12("bat", ":/image for c++ project/English/Speller/Animals/bat.jpeg");
    Objects a13("bear", ":/image for c++ project/English/Speller/Animals/bear.jpeg");
    Objects a14("bearded dragon", ":/image for c++ project/English/Speller/Animals/bearded dragon.jpeg");
    Objects a15("beaver", ":/image for c++ project/English/Speller/Animals/beaver.jpeg");
    Objects a16("bee", ":/image for c++ project/English/Speller/Animals/bee.jpeg");
    Objects a17("beetle", ":/image for c++ project/English/Speller/Animals/beetle.jpeg");
    Objects a18("beluga whale", ":/image for c++ project/English/Speller/Animals/beluga whale.jpeg");
    Objects a19("bird", ":/image for c++ project/English/Speller/Animals/bird.jpeg");
    Objects a20("bison", ":/image for c++ project/English/Speller/Animals/bison.jpeg");
    Objects a21("black bear", ":/image for c++ project/English/Speller/Animals/black bear.jpeg");
    Objects a22("black swan", ":/image for c++ project/English/Speller/Animals/black swan.jpeg");
    Objects a23("blue whale", ":/image for c++ project/English/Speller/Animals/blue whale.jpeg");
    Objects a24("bobcat", ":/image for c++ project/English/Speller/Animals/bobcat.jpeg");
    Objects a25("buffalo", ":/image for c++ project/English/Speller/Animals/buffalo.jpeg");
    Objects a26("bull", ":/image for c++ project/English/Speller/Animals/bull.jpeg");
    Objects a27("bumblebee", ":/image for c++ project/English/Speller/Animals/bumblebee.jpeg");
    Objects a28("butterfly", ":/image for c++ project/English/Speller/Animals/butterfly.jpeg");
    Objects a29("camel", ":/image for c++ project/English/Speller/Animals/camel.jpeg");
    Objects a30("capybara", ":/image for c++ project/English/Speller/Animals/capybara.jpeg");
    Objects a31("cat", ":/image for c++ project/English/Speller/Animals/cat.jpeg");
    Objects a32("caterpillar", ":/image for c++ project/English/Speller/Animals/caterpillar.jpeg");
    Objects a33("centipede", ":/image for c++ project/English/Speller/Animals/centipede.jpeg");
    Objects a34("chameleon", ":/image for c++ project/English/Speller/Animals/chameleon.jpeg");
    Objects a35("cheetah", ":/image for c++ project/English/Speller/Animals/cheetah.jpeg");
    Objects a36("chicken", ":/image for c++ project/English/Speller/Animals/chicken.jpeg");
    Objects a37("chimipanzee", ":/image for c++ project/English/Speller/Animals/chimipanzee.jpeg");
    Objects a38("chinchilla", ":/image for c++ project/English/Speller/Animals/chinchilla.jpeg");
    Objects a39("chipmunk", ":/image for c++ project/English/Speller/Animals/chipmunk.jpeg");
    Objects a40("clam", ":/image for c++ project/English/Speller/Animals/clam.jpeg");
    Objects a41("clownfish", ":/image for c++ project/English/Speller/Animals/clownfish.jpeg");
    Objects a42("cobra", ":/image for c++ project/English/Speller/Animals/cobra.jpeg");
    Objects a43("cockroach", ":/image for c++ project/English/Speller/Animals/cockroach.jpeg");
    Objects a44("cow", ":/image for c++ project/English/Speller/Animals/cow.jpeg");
    Objects a45("coyote", ":/image for c++ project/English/Speller/Animals/coyote.jpeg");
    Objects a46("crab", ":/image for c++ project/English/Speller/Animals/crab.jpeg");
    Objects a47("crocodile", ":/image for c++ project/English/Speller/Animals/crocodile.jpeg");
    Objects a48("crow", ":/image for c++ project/English/Speller/Animals/crow.jpeg");
    Objects a49("deer", ":/image for c++ project/English/Speller/Animals/deer.jpeg");
    Objects a50("dingo", ":/image for c++ project/English/Speller/Animals/dingo.jpeg");
    Objects a51("dinosaur", ":/image for c++ project/English/Speller/Animals/dinosaur.jpeg");
    Objects a52("dog", ":/image for c++ project/English/Speller/Animals/dog.jpeg");
    Objects a53("dolphin", ":/image for c++ project/English/Speller/Animals/dolphin.jpeg");
    Objects a54("donkey", ":/image for c++ project/English/Speller/Animals/donkey.jpeg");
    Objects a55("dove", ":/image for c++ project/English/Speller/Animals/dove.jpeg");
    Objects a56("dragonfly", ":/image for c++ project/English/Speller/Animals/dragonfly.jpeg");
    Objects a57("duck", ":/image for c++ project/English/Speller/Animals/duck.jpeg");
    Objects a58("eagle", ":/image for c++ project/English/Speller/Animals/eagle.jpeg");
    Objects a59("eel", ":/image for c++ project/English/Speller/Animals/eel.jpeg");
    Objects a60("elephant", ":/image for c++ project/English/Speller/Animals/elephant.jpeg");
    Objects a61("emu", ":/image for c++ project/English/Speller/Animals/emu.jpeg");
    Objects a62("ferret", ":/image for c++ project/English/Speller/Animals/ferret.jpeg");
    Objects a63("firefly", ":/image for c++ project/English/Speller/Animals/firefly.jpeg");
    Objects a64("fish", ":/image for c++ project/English/Speller/Animals/fish.jpeg");
    Objects a65("flamingo", ":/image for c++ project/English/Speller/Animals/flamingo.jpeg");
    Objects a66("fly", ":/image for c++ project/English/Speller/Animals/fly.jpeg");
    Objects a67("fox", ":/image for c++ project/English/Speller/Animals/fox.jpeg");
    Objects a68("frog", ":/image for c++ project/English/Speller/Animals/frog.jpeg");
    Objects a69("gecko", ":/image for c++ project/English/Speller/Animals/gecko.jpeg");
    Objects a70("giraffe", ":/image for c++ project/English/Speller/Animals/giraffe.jpeg");
    Objects a71("goat", ":/image for c++ project/English/Speller/Animals/goat.jpeg");
    Objects a72("goldfish", ":/image for c++ project/English/Speller/Animals/goldfish.jpeg");
    Objects a73("goose", ":/image for c++ project/English/Speller/Animals/goose.jpeg");
    Objects a74("gorilla", ":/image for c++ project/English/Speller/Animals/gorilla.jpeg");
    Objects a75("grasshopper", ":/image for c++ project/English/Speller/Animals/grasshopper.jpeg");
    Objects a76("guinea pig", ":/image for c++ project/English/Speller/Animals/guinea pig.jpeg");
    Objects a77("hamster", ":/image for c++ project/English/Speller/Animals/hamster.jpeg");
    Objects a78("hedgehog", ":/image for c++ project/English/Speller/Animals/hedgehog.jpeg");
    Objects a79("hermit crab", ":/image for c++ project/English/Speller/Animals/hermit crab.jpeg");
    Objects a80("hippopotamus", ":/image for c++ project/English/Speller/Animals/hippopotamus.jpeg");
    Objects a81("horse", ":/image for c++ project/English/Speller/Animals/horse.jpeg");
    Objects a82("hummingbird", ":/image for c++ project/English/Speller/Animals/hummingbird.jpeg");
    Objects a83("hyena", ":/image for c++ project/English/Speller/Animals/hyena.jpeg");
    Objects a84("iguana", ":/image for c++ project/English/Speller/Animals/iguana.jpeg");
    Objects a85("jaguar", ":/image for c++ project/English/Speller/Animals/jaguar.jpeg");
    Objects a86("jellyfish", ":/image for c++ project/English/Speller/Animals/jellyfish.jpeg");
    Objects a87("kangaroo", ":/image for c++ project/English/Speller/Animals/kangaroo.jpeg");
    Objects a88("killer whale", ":/image for c++ project/English/Speller/Animals/killer whale.jpeg");
    Objects a89("kiwi", ":/image for c++ project/English/Speller/Animals/kiwi.jpeg");
    Objects a90("koala", ":/image for c++ project/English/Speller/Animals/koala.jpeg");
    Objects a91("komodo dragon", ":/image for c++ project/English/Speller/Animals/komodo dragon.jpeg");
    Objects a92("ladybug", ":/image for c++ project/English/Speller/Animals/ladybug.jpeg");
    Objects a93("leopard", ":/image for c++ project/English/Speller/Animals/leopard.jpeg");
    Objects a94("lion", ":/image for c++ project/English/Speller/Animals/lion.jpeg");
    Objects a95("llama", ":/image for c++ project/English/Speller/Animals/llama.jpeg");
    Objects a96("lobster", ":/image for c++ project/English/Speller/Animals/lobster.jpeg");
    Objects a97("lynx", ":/image for c++ project/English/Speller/Animals/lynx.jpeg");
    Objects a98("mantis", ":/image for c++ project/English/Speller/Animals/mantis.jpeg");
    Objects a99("meerkat", ":/image for c++ project/English/Speller/Animals/meerkat.jpeg");
    Objects a100("monkey", ":/image for c++ project/English/Speller/Animals/monkey.jpeg");
    Objects a101("moose", ":/image for c++ project/English/Speller/Animals/moose.jpeg");
    Objects a102("mosquito", ":/image for c++ project/English/Speller/Animals/mosquito.jpeg");
    Objects a103("moth", ":/image for c++ project/English/Speller/Animals/moth.jpeg");
    Objects a104("mouse", ":/image for c++ project/English/Speller/Animals/mouse.jpeg");
    Objects a105("octopus", ":/image for c++ project/English/Speller/Animals/octopus.jpeg");
    Objects a106("opossum", ":/image for c++ project/English/Speller/Animals/opossum.jpeg");
    Objects a107("orangutan", ":/image for c++ project/English/Speller/Animals/orangutan.jpeg");
    Objects a108("ostrich", ":/image for c++ project/English/Speller/Animals/ostrich.jpeg");
    Objects a109("otter", ":/image for c++ project/English/Speller/Animals/otter.jpeg");
    Objects a110("owl", ":/image for c++ project/English/Speller/Animals/owl.jpeg");
    Objects a111("panda", ":/image for c++ project/English/Speller/Animals/panda.jpeg");
    Objects a112("panther", ":/image for c++ project/English/Speller/Animals/panther.jpeg");
    Objects a113("parrot", ":/image for c++ project/English/Speller/Animals/parrot.jpeg");
    Objects a114("pelican", ":/image for c++ project/English/Speller/Animals/pelican.jpeg");
    Objects a115("penguin", ":/image for c++ project/English/Speller/Animals/penguin.jpeg");
    Objects a116("pig", ":/image for c++ project/English/Speller/Animals/pig.jpeg");
    Objects a117("pigeon", ":/image for c++ project/English/Speller/Animals/pigeon.jpeg");
    Objects a118("piranha", ":/image for c++ project/English/Speller/Animals/piranha.jpeg");
    Objects a119("platypus", ":/image for c++ project/English/Speller/Animals/platypus.jpeg");
    Objects a120("polar bear", ":/image for c++ project/English/Speller/Animals/polar bear.jpeg");
    Objects a121("porcupine", ":/image for c++ project/English/Speller/Animals/porcupine.jpeg");
    Objects a122("pufferfish", ":/image for c++ project/English/Speller/Animals/pufferfish.jpeg");
    Objects a123("quail", ":/image for c++ project/English/Speller/Animals/quail.jpeg");
    Objects a124("rabbit", ":/image for c++ project/English/Speller/Animals/rabbit.jpeg");
    Objects a125("raccoon", ":/image for c++ project/English/Speller/Animals/raccoon.jpeg");
    Objects a126("rat", ":/image for c++ project/English/Speller/Animals/rat.jpeg");
    Objects a127("rattlesnake", ":/image for c++ project/English/Speller/Animals/rattlesnake.jpeg");
    Objects a128("ray", ":/image for c++ project/English/Speller/Animals/ray.jpeg");
    Objects a129("red panda", ":/image for c++ project/English/Speller/Animals/red panda.jpeg");
    Objects a130("reindeer", ":/image for c++ project/English/Speller/Animals/reindeer.jpeg");
    Objects a131("rhino", ":/image for c++ project/English/Speller/Animals/rhino.jpeg");
    Objects a132("seahorse", ":/image for c++ project/English/Speller/Animals/seahorse.jpeg");
    Objects a133("seal", ":/image for c++ project/English/Speller/Animals/seal.jpeg");
    Objects a134("sealion", ":/image for c++ project/English/Speller/Animals/sealion.jpeg");
    Objects a135("shark", ":/image for c++ project/English/Speller/Animals/shark.jpeg");
    Objects a136("sheep", ":/image for c++ project/English/Speller/Animals/sheep.jpeg");
    Objects a137("skunk", ":/image for c++ project/English/Speller/Animals/skunk.jpeg");
    Objects a138("sloth", ":/image for c++ project/English/Speller/Animals/sloth.jpeg");
    Objects a139("slug", ":/image for c++ project/English/Speller/Animals/slug.jpeg");
    Objects a140("snail", ":/image for c++ project/English/Speller/Animals/snail.jpeg");
    Objects a141("snake", ":/image for c++ project/English/Speller/Animals/snake.jpeg");
    Objects a142("spider", ":/image for c++ project/English/Speller/Animals/spider.jpeg");
    Objects a143("squirrel", ":/image for c++ project/English/Speller/Animals/squirrel.jpeg");
    Objects a144("starfish", ":/image for c++ project/English/Speller/Animals/starfish.jpeg");
    Objects a145("swan", ":/image for c++ project/English/Speller/Animals/swan.jpeg");
    Objects a146("toad", ":/image for c++ project/English/Speller/Animals/toad.jpeg");
    Objects a147("tortoise", ":/image for c++ project/English/Speller/Animals/tortoise.jpeg");
    Objects a148("turkey", ":/image for c++ project/English/Speller/Animals/turkey.jpeg");
    Objects a149("turtle", ":/image for c++ project/English/Speller/Animals/turtle.jpeg");
    Objects a150("urchin", ":/image for c++ project/English/Speller/Animals/urchin.jpeg");
    Objects a151("walrus", ":/image for c++ project/English/Speller/Animals/walrus.jpeg");
    Objects a152("whale", ":/image for c++ project/English/Speller/Animals/whale.jpeg");
    Objects a153("wolf", ":/image for c++ project/English/Speller/Animals/wolf.jpeg");
    Objects a154("worm", ":/image for c++ project/English/Speller/Animals/worm.jpeg");
    Objects a155("yellowjacket", ":/image for c++ project/English/Speller/Animals/yellowjacket.jpeg");
    Objects a156("zebra", ":/image for c++ project/English/Speller/Animals/zebra.jpeg");

    VecAnimal = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20,
                 a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40,
                 a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60,
                 a61, a62, a63, a64, a65, a66, a67, a68, a69, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a80,
                 a81, a82, a83, a84, a85, a86, a87, a88, a89, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99, a100,
                 a101, a102, a103, a104, a105, a106, a107, a108, a109, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a120,
                 a121, a122, a123, a124, a125, a126, a127, a128, a129, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a140,
                 a141, a142, a143, a144, a145, a146, a147, a148, a149, a150, a151, a152, a153, a154, a155, a156};

    Objects f1("almond", ":/image for c++ project/English/Speller/Foods/almond.jpeg");
    Objects f2("apple", ":/image for c++ project/English/Speller/Foods/apple.jpeg");
    Objects f3("asparagus", ":/image for c++ project/English/Speller/Foods/asparagus.jpeg");
    Objects f4("avocado", ":/image for c++ project/English/Speller/Foods/avocado.jpeg");
    Objects f5("bacon", ":/image for c++ project/English/Speller/Foods/bacon.jpeg");
    Objects f6("bagel", ":/image for c++ project/English/Speller/Foods/bagel.jpeg");
    Objects f7("bbq", ":/image for c++ project/English/Speller/Foods/bbq.jpeg");
    Objects f8("beer", ":/image for c++ project/English/Speller/Foods/beer.jpeg");
    Objects f9("bread", ":/image for c++ project/English/Speller/Foods/bread.jpeg");
    Objects f10("broccoli", ":/image for c++ project/English/Speller/Foods/broccoli.jpeg");
    Objects f11("bruschetta", ":/image for c++ project/English/Speller/Foods/bruschetta.jpeg");
    Objects f12("burrito", ":/image for c++ project/English/Speller/Foods/burrito.jpeg");
    Objects f13("cake", ":/image for c++ project/English/Speller/Foods/cake.jpeg");
    Objects f14("carrot", ":/image for c++ project/English/Speller/Foods/carrot.jpeg");
    Objects f15("celery", ":/image for c++ project/English/Speller/Foods/celery.jpeg");
    Objects f16("cereal", ":/image for c++ project/English/Speller/Foods/cereal.jpeg");
    Objects f17("cheese", ":/image for c++ project/English/Speller/Foods/cheese.jpeg");
    Objects f18("chocolate", ":/image for c++ project/English/Speller/Foods/chocolate.jpeg");
    Objects f19("coffee", ":/image for c++ project/English/Speller/Foods/coffee.jpeg");
    Objects f20("cookie", ":/image for c++ project/English/Speller/Foods/cookie.jpeg");
    Objects f21("cupcake", ":/image for c++ project/English/Speller/Foods/cupcake.jpeg");
    Objects f22("curry", ":/image for c++ project/English/Speller/Foods/curry.jpeg");
    Objects f23("donut", ":/image for c++ project/English/Speller/Foods/donut.jpeg");
    Objects f24("dumpling", ":/image for c++ project/English/Speller/Foods/dumpling.jpeg");
    Objects f25("fondue", ":/image for c++ project/English/Speller/Foods/fondue.jpeg");
    Objects f26("french toast", ":/image for c++ project/English/Speller/Foods/french toast.jpeg");
    Objects f27("gnocchi", ":/image for c++ project/English/Speller/Foods/gnocchi.jpeg");
    Objects f28("granola", ":/image for c++ project/English/Speller/Foods/granola.jpeg");
    Objects f29("guacamole", ":/image for c++ project/English/Speller/Foods/guacamole.jpeg");
    Objects f30("ham", ":/image for c++ project/English/Speller/Foods/ham.jpeg");
    Objects f31("hamburger", ":/image for c++ project/English/Speller/Foods/hamburger.jpeg");
    Objects f32("hot dog", ":/image for c++ project/English/Speller/Foods/hot dog.jpeg");
    Objects f33("ice cream", ":/image for c++ project/English/Speller/Foods/ice cream.jpeg");
    Objects f34("jelly", ":/image for c++ project/English/Speller/Foods/jelly.jpeg");
    Objects f35("ketchup", ":/image for c++ project/English/Speller/Foods/ketchup.jpeg");
    Objects f36("kimchi", ":/image for c++ project/English/Speller/Foods/kimchi.jpeg");
    Objects f37("lasagna", ":/image for c++ project/English/Speller/Foods/lasagna.jpeg");
    Objects f38("lobster", ":/image for c++ project/English/Speller/Foods/lobster.jpeg");
    Objects f39("milkshake", ":/image for c++ project/English/Speller/Foods/milkshake.jpeg");
    Objects f40("noodle", ":/image for c++ project/English/Speller/Foods/noodle.jpeg");
    Objects f41("pad kra pao", ":/image for c++ project/English/Speller/Foods/pad kra pao.jpeg");
    Objects f42("pad thai", ":/image for c++ project/English/Speller/Foods/pad thai.jpeg");
    Objects f43("pancake", ":/image for c++ project/English/Speller/Foods/pancake.jpeg");
    Objects f44("pizza", ":/image for c++ project/English/Speller/Foods/pizza.jpeg");
    Objects f45("quesadilla", ":/image for c++ project/English/Speller/Foods/quesadilla.jpeg");
    Objects f46("ramen", ":/image for c++ project/English/Speller/Foods/ramen.jpeg");
    Objects f47("spaghetti", ":/image for c++ project/English/Speller/Foods/spaghetti.jpeg");
    Objects f48("sushi", ":/image for c++ project/English/Speller/Foods/sushi.jpeg");
    Objects f49("waffle", ":/image for c++ project/English/Speller/Foods/waffle.jpeg");
    Objects f50("wine", ":/image for c++ project/English/Speller/Foods/wine.jpeg");
    Objects f51("yogurt", ":/image for c++ project/English/Speller/Foods/yogurt.jpeg");
    Objects f52("zucchini", ":/image for c++ project/English/Speller/Foods/zucchini.jpeg");
    Objects f53("sausage", ":/image for c++ project/English/Speller/Foods/sausage.jpeg");
    Objects f54("lollipop", ":/image for c++ project/English/Speller/Foods/lollipop.jpeg");
    Objects f55("mushroom", ":/image for c++ project/English/Speller/Foods/mushroom.jpeg");
    Objects f56("truffle", ":/image for c++ project/English/Speller/Foods/truffle.jpeg");
    Objects f57("oatmeal", ":/image for c++ project/English/Speller/Foods/oatmeal.jpeg");
    Objects f58("baguette", ":/image for c++ project/English/Speller/Foods/baguette.jpeg");
    Objects f59("edamame", ":/image for c++ project/English/Speller/Foods/edamame.jpeg");
    Objects f60("ginger", ":/image for c++ project/English/Speller/Foods/ginger.jpeg");

    VecFood = {f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20,
               f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40,
               f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60};

    Objects j1("accountant", ":/image for c++ project/English/Speller/Jobs/accountant.jpeg");
    Objects j2("actor", ":/image for c++ project/English/Speller/Jobs/actor.jpeg");
    Objects j3("actress", ":/image for c++ project/English/Speller/Jobs/actress.jpeg");
    Objects j4("architect", ":/image for c++ project/English/Speller/Jobs/architect.jpeg");
    Objects j5("artist", ":/image for c++ project/English/Speller/Jobs/artist.jpeg");
    Objects j6("athelete", ":/image for c++ project/English/Speller/Jobs/athelete.jpeg");
    Objects j7("baker", ":/image for c++ project/English/Speller/Jobs/baker fox.jpeg");
    Objects j8("bank teller", ":/image for c++ project/English/Speller/Jobs/bank teller.jpeg");
    Objects j9("barista", ":/image for c++ project/English/Speller/Jobs/barista.jpeg");
    Objects j10("bus driver", ":/image for c++ project/English/Speller/Jobs/bus driver.jpeg");
    Objects j11("butcher", ":/image for c++ project/English/Speller/Jobs/butcher.jpeg");
    Objects j12("cabin crew", ":/image for c++ project/English/Speller/Jobs/cabin crew.jpeg");
    Objects j13("carpenter", ":/image for c++ project/English/Speller/Jobs/carpenter.jpeg");
    Objects j14("ceo", ":/image for c++ project/English/Speller/Jobs/ceo.jpeg");
    Objects j15("chef", ":/image for c++ project/English/Speller/Jobs/chef.jpeg");
    Objects j16("chemist", ":/image for c++ project/English/Speller/Jobs/chemist.jpeg");
    Objects j17("choreographer", ":/image for c++ project/English/Speller/Jobs/choreographer.jpeg");
    Objects j18("cleaner", ":/image for c++ project/English/Speller/Jobs/cleaner.jpeg");
    Objects j19("clown", ":/image for c++ project/English/Speller/Jobs/clown.jpeg");
    Objects j20("comedian", ":/image for c++ project/English/Speller/Jobs/comedian.jpeg");
    Objects j21("dancer", ":/image for c++ project/English/Speller/Jobs/dancer.jpeg");
    Objects j22("delivery driver", ":/image for c++ project/English/Speller/Jobs/delivery driver.jpeg");
    Objects j23("dentist", ":/image for c++ project/English/Speller/Jobs/dentist.jpeg");
    Objects j24("dj", ":/image for c++ project/English/Speller/Jobs/dj.jpeg");
    Objects j25("doctor", ":/image for c++ project/English/Speller/Jobs/doctor.jpeg");
    Objects j26("ecologist", ":/image for c++ project/English/Speller/Jobs/ecologist.jpeg");
    Objects j27("editor", ":/image for c++ project/English/Speller/Jobs/editor.jpeg");
    Objects j28("electrician", ":/image for c++ project/English/Speller/Jobs/electrician.jpeg");
    Objects j29("estate agent", ":/image for c++ project/English/Speller/Jobs/estate agent.jpeg");
    Objects j30("farmer", ":/image for c++ project/English/Speller/Jobs/farmer.jpeg");
    Objects j31("fashion designer", ":/image for c++ project/English/Speller/Jobs/fashion designer.jpeg");
    Objects j32("film director", ":/image for c++ project/English/Speller/Jobs/film director.jpeg");
    Objects j33("firefighter", ":/image for c++ project/English/Speller/Jobs/firefighter.jpeg");
    Objects j34("florist", ":/image for c++ project/English/Speller/Jobs/florist.jpeg");
    Objects j35("geologist", ":/image for c++ project/English/Speller/Jobs/geologist.jpeg");
    Objects j36("graphic designer", ":/image for c++ project/English/Speller/Jobs/graphic designer.jpeg");
    Objects j37("hairdresser", ":/image for c++ project/English/Speller/Jobs/hairdresser.jpeg");
    Objects j38("journalist", ":/image for c++ project/English/Speller/Jobs/journalist.jpeg");
    Objects j39("judge", ":/image for c++ project/English/Speller/Jobs/judge.jpeg");
    Objects j40("lawyer", ":/image for c++ project/English/Speller/Jobs/lawyer.jpeg");
    Objects j41("librarian", ":/image for c++ project/English/Speller/Jobs/librarian.jpeg");
    Objects j42("lifeguard", ":/image for c++ project/English/Speller/Jobs/lifeguard.jpeg");
    Objects j43("make up artist", ":/image for c++ project/English/Speller/Jobs/make up artist.jpeg");
    Objects j44("model", ":/image for c++ project/English/Speller/Jobs/model.jpeg");
    Objects j45("monk", ":/image for c++ project/English/Speller/Jobs/monk.jpeg");
    Objects j46("musician", ":/image for c++ project/English/Speller/Jobs/musician.jpeg");
    Objects j47("nanny", ":/image for c++ project/English/Speller/Jobs/nanny.jpeg");
    Objects j48("news reporter", ":/image for c++ project/English/Speller/Jobs/news reporter.jpeg");
    Objects j49("nurse", ":/image for c++ project/English/Speller/Jobs/nurse.jpeg");
    Objects j50("paleontologist", ":/image for c++ project/English/Speller/Jobs/paleontologist.jpeg");
    Objects j51("paramedic", ":/image for c++ project/English/Speller/Jobs/paramedic.jpeg");
    Objects j52("pastor", ":/image for c++ project/English/Speller/Jobs/pastor.jpeg");
    Objects j53("personal trainer", ":/image for c++ project/English/Speller/Jobs/personal trainer.jpeg");
    Objects j54("photographer", ":/image for c++ project/English/Speller/Jobs/photographer.jpeg");
    Objects j55("physicist", ":/image for c++ project/English/Speller/Jobs/physicist.jpeg");
    Objects j56("pilot", ":/image for c++ project/English/Speller/Jobs/pilot.jpeg");
    Objects j57("police", ":/image for c++ project/English/Speller/Jobs/police.jpeg");
    Objects j58("politician", ":/image for c++ project/English/Speller/Jobs/politician.jpeg");
    Objects j59("receptionist", ":/image for c++ project/English/Speller/Jobs/receptionist.jpeg");
    Objects j60("scientist", ":/image for c++ project/English/Speller/Jobs/scientist.jpeg");
    Objects j61("software developer", ":/image for c++ project/English/Speller/Jobs/software developer.jpeg");
    Objects j62("soldier", ":/image for c++ project/English/Speller/Jobs/soldier.jpeg");
    Objects j63("surgeon", ":/image for c++ project/English/Speller/Jobs/surgeon.jpeg");
    Objects j64("taxi driver", ":/image for c++ project/English/Speller/Jobs/taxi driver.jpeg");
    Objects j65("teacher", ":/image for c++ project/English/Speller/Jobs/teacher.jpeg");
    Objects j66("vet", ":/image for c++ project/English/Speller/Jobs/vet.jpeg");
    Objects j67("vlogger", ":/image for c++ project/English/Speller/Jobs/vlogger.jpeg");
    Objects j68("waitress", ":/image for c++ project/English/Speller/Jobs/waitress.jpeg");
    Objects j69("youtuber", ":/image for c++ project/English/Speller/Jobs/youtuber.jpeg");
    Objects j70("zookeeper", ":/image for c++ project/English/Speller/Jobs/zookeeper.jpeg");

    VecJob = {j1, j2, j3, j4, j5, j6, j7, j8, j9, j10, j11, j12, j13, j14, j15, j16, j17, j18, j19, j20,
              j21, j22, j23, j24, j25, j26, j27, j28, j29, j30, j31, j32, j33, j34, j35, j36, j37, j38, j39, j40,
              j41, j42, j43, j44, j45, j46, j47, j48, j49, j50, j51, j52, j53, j54, j55, j56, j57, j58, j59, j60,
              j61, j62, j63, j64, j65, j66, j67, j68, j69, j70};

    Objects p1("airport", ":/image for c++ project/English/Speller/Places/airport.jpeg");
    Objects p2("amusement park", ":/image for c++ project/English/Speller/Places/amusement park.jpeg");
    Objects p3("aquarium", ":/image for c++ project/English/Speller/Places/aquarium.jpeg");
    Objects p4("art gallery", ":/image for c++ project/English/Speller/Places/art gallery.jpeg");
    Objects p5("bakery", ":/image for c++ project/English/Speller/Places/bakery.jpeg");
    Objects p6("beach", ":/image for c++ project/English/Speller/Places/beach.jpeg");
    Objects p7("bookstore", ":/image for c++ project/English/Speller/Places/bookstore.jpeg");
    Objects p8("bowling alley", ":/image for c++ project/English/Speller/Places/bowling alley.jpeg");
    Objects p9("bridge", ":/image for c++ project/English/Speller/Places/bridge.jpeg");
    Objects p10("bus station", ":/image for c++ project/English/Speller/Places/bus station.jpeg");
    Objects p11("cafe", ":/image for c++ project/English/Speller/Places/cafe.jpeg");
    Objects p12("cathedral", ":/image for c++ project/English/Speller/Places/cathedral.jpeg");
    Objects p13("church", ":/image for c++ project/English/Speller/Places/church.jpeg");
    Objects p14("cinema", ":/image for c++ project/English/Speller/Places/cinema.jpeg");
    Objects p15("convenient store", ":/image for c++ project/English/Speller/Places/convenient store.jpeg");
    Objects p16("cruise", ":/image for c++ project/English/Speller/Places/cruise.jpeg");
    Objects p17("desert", ":/image for c++ project/English/Speller/Places/desert.jpeg");
    Objects p18("electronics store", ":/image for c++ project/English/Speller/Places/electronics store.jpeg");
    Objects p19("factory", ":/image for c++ project/English/Speller/Places/factory.jpeg");
    Objects p20("farm", ":/image for c++ project/English/Speller/Places/farm.jpeg");
    Objects p21("fire station", ":/image for c++ project/English/Speller/Places/fire station.jpeg");
    Objects p22("forest", ":/image for c++ project/English/Speller/Places/forest.jpeg");
    Objects p23("furniture store", ":/image for c++ project/English/Speller/Places/furniture store.jpeg");
    Objects p24("gas station", ":/image for c++ project/English/Speller/Places/gas station.jpeg");
    Objects p25("greenhouse", ":/image for c++ project/English/Speller/Places/greenhouse.jpeg");
    Objects p26("gym", ":/image for c++ project/English/Speller/Places/gym.jpeg");
    Objects p27("hair salon", ":/image for c++ project/English/Speller/Places/hair salon.jpeg");
    Objects p28("hospital", ":/image for c++ project/English/Speller/Places/hospital.jpeg");
    Objects p29("hotel", ":/image for c++ project/English/Speller/Places/hotel.jpeg");
    Objects p30("house", ":/image for c++ project/English/Speller/Places/house.jpeg");
    Objects p31("lecture hall", ":/image for c++ project/English/Speller/Places/lecture hall.jpeg");
    Objects p32("libraby", ":/image for c++ project/English/Speller/Places/libraby.jpeg");
    Objects p33("mall", ":/image for c++ project/English/Speller/Places/mall.jpeg");
    Objects p34("musuem", ":/image for c++ project/English/Speller/Places/musuem.jpeg");
    Objects p35("nightclub", ":/image for c++ project/English/Speller/Places/nightclub.jpeg");
    Objects p36("office", ":/image for c++ project/English/Speller/Places/office.jpeg");
    Objects p37("palace", ":/image for c++ project/English/Speller/Places/palace.jpeg");
    Objects p38("park", ":/image for c++ project/English/Speller/Places/park.jpeg");
    Objects p39("pet shop", ":/image for c++ project/English/Speller/Places/pet shop.jpeg");
    Objects p40("pharmacy", ":/image for c++ project/English/Speller/Places/pharmacy.jpeg");
    Objects p41("play ground", ":/image for c++ project/English/Speller/Places/play ground.jpeg");
    Objects p42("police station", ":/image for c++ project/English/Speller/Places/police station.jpeg");
    Objects p43("port", ":/image for c++ project/English/Speller/Places/port.jpeg");
    Objects p44("post office", ":/image for c++ project/English/Speller/Places/post office.jpeg");
    Objects p45("restaurant", ":/image for c++ project/English/Speller/Places/restaurant.jpeg");
    Objects p46("school", ":/image for c++ project/English/Speller/Places/school.jpeg");
    Objects p47("shoe store", ":/image for c++ project/English/Speller/Places/shoe store.jpeg");
    Objects p48("skyscraper", ":/image for c++ project/English/Speller/Places/skyscraper.jpeg");
    Objects p49("spa", ":/image for c++ project/English/Speller/Places/spa.jpeg");
    Objects p50("stadium", ":/image for c++ project/English/Speller/Places/stadium.jpeg");
    Objects p51("supermarket", ":/image for c++ project/English/Speller/Places/supermarket.jpeg");
    Objects p52("temple", ":/image for c++ project/English/Speller/Places/temple.jpeg");
    Objects p53("theater", ":/image for c++ project/English/Speller/Places/theater.jpeg");
    Objects p54("tree house", ":/image for c++ project/English/Speller/Places/tree house.jpeg");
    Objects p55("university", ":/image for c++ project/English/Speller/Places/university.jpeg");
    Objects p56("zoo", ":/image for c++ project/English/Speller/Places/zoo.jpeg");
    Objects p57("nail salon", ":/image for c++ project/English/Speller/Places/nail salon.jpeg");
    Objects p58("national park", ":/image for c++ project/English/Speller/Places/national park.jpeg");
    Objects p59("grooming salon", ":/image for c++ project/English/Speller/Places/grooming salon.jpeg");
    Objects p60("laundromat", ":/image for c++ project/English/Speller/Places/laundromat.jpeg");

    VecPlace = {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20,
                p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40,
                p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, p59, p60};

    Objects t1("anchor", ":/image for c++ project/English/Speller/Things/anchor.jpeg");
    Objects t2("apron", ":/image for c++ project/English/Speller/Things/apron.jpeg");
    Objects t3("backpack", ":/image for c++ project/English/Speller/Things/backpack.jpeg");
    Objects t4("baseball", ":/image for c++ project/English/Speller/Things/baseball.jpeg");
    Objects t5("basketball", ":/image for c++ project/English/Speller/Things/basketball.jpeg");
    Objects t6("bicycle", ":/image for c++ project/English/Speller/Things/bicycle.jpeg");
    Objects t7("camera", ":/image for c++ project/English/Speller/Things/camera.jpeg");
    Objects t8("candle", ":/image for c++ project/English/Speller/Things/candle.jpeg");
    Objects t9("clock", ":/image for c++ project/English/Speller/Things/clock.jpeg");
    Objects t10("computer", ":/image for c++ project/English/Speller/Things/computer.jpeg");
    Objects t11("diamond", ":/image for c++ project/English/Speller/Things/diamond.jpeg");
    Objects t12("dice", ":/image for c++ project/English/Speller/Things/dice.jpeg");
    Objects t13("drum", ":/image for c++ project/English/Speller/Things/drum.jpeg");
    Objects t14("fireworks", ":/image for c++ project/English/Speller/Things/fireworks.jpeg");
    Objects t15("football", ":/image for c++ project/English/Speller/Things/football.jpeg");
    Objects t16("gift", ":/image for c++ project/English/Speller/Things/gift.jpeg");
    Objects t17("glasses", ":/image for c++ project/English/Speller/Things/glasses.jpeg");
    Objects t18("gloves", ":/image for c++ project/English/Speller/Things/gloves.jpeg");
    Objects t19("hammer", ":/image for c++ project/English/Speller/Things/hammer.jpeg");
    Objects t20("igloo", ":/image for c++ project/English/Speller/Things/igloo.jpeg");
    Objects t21("ink", ":/image for c++ project/English/Speller/Things/ink.jpeg");
    Objects t22("jewelry", ":/image for c++ project/English/Speller/Things/jewelry.jpeg");
    Objects t23("jigsaw puzzle", ":/image for c++ project/English/Speller/Things/jigsaw puzzle.jpeg");
    Objects t24("kettle", ":/image for c++ project/English/Speller/Things/kettle.jpeg");
    Objects t25("keyboard", ":/image for c++ project/English/Speller/Things/keyboard.jpeg");
    Objects t26("kite", ":/image for c++ project/English/Speller/Things/kite.jpeg");
    Objects t27("lamborghini", ":/image for c++ project/English/Speller/Things/lamborghini.jpeg");
    Objects t28("lantern", ":/image for c++ project/English/Speller/Things/lantern.jpeg");
    Objects t29("lava", ":/image for c++ project/English/Speller/Things/lava.jpeg");
    Objects t30("mailbox", ":/image for c++ project/English/Speller/Things/mailbox.jpeg");
    Objects t31("mirror", ":/image for c++ project/English/Speller/Things/mirror.jpeg");
    Objects t32("money", ":/image for c++ project/English/Speller/Things/money.jpeg");
    Objects t33("printer", ":/image for c++ project/English/Speller/Things/printer.jpeg");
    Objects t34("raft", ":/image for c++ project/English/Speller/Things/raft.jpeg");
    Objects t35("saddle", ":/image for c++ project/English/Speller/Things/saddle.jpeg");
    Objects t36("scissors", ":/image for c++ project/English/Speller/Things/scissors.jpeg");
    Objects t37("tape", ":/image for c++ project/English/Speller/Things/tape.jpeg");
    Objects t38("throne", ":/image for c++ project/English/Speller/Things/throne.jpeg");
    Objects t39("tie", ":/image for c++ project/English/Speller/Things/tie.jpeg");
    Objects t40("umbrella", ":/image for c++ project/English/Speller/Things/umbrella.jpeg");
    Objects t41("xylophone", ":/image for c++ project/English/Speller/Things/xylophone.jpeg");
    Objects t42("zipper", ":/image for c++ project/English/Speller/Things/zipper.jpeg");
    Objects t43("key", ":/image for c++ project/English/Speller/Things/key.jpeg");
    Objects t44("lamp", ":/image for c++ project/English/Speller/Things/lamp.jpeg");
    Objects t45("radio", ":/image for c++ project/English/Speller/Things/radio.jpeg");
    Objects t46("toaster", ":/image for c++ project/English/Speller/Things/toaster.jpeg");
    Objects t47("telescope", ":/image for c++ project/English/Speller/Things/telescope.jpeg");
    Objects t48("vase", ":/image for c++ project/English/Speller/Things/vase.jpeg");
    Objects t49("helmet", ":/image for c++ project/English/Speller/Things/helmet.jpeg");
    Objects t50("satellite", ":/image for c++ project/English/Speller/Things/satellite.jpeg");

    VecThing = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20,
                t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40,
                t41, t42, t45, t46, t47, t48, t49, t50};
}

Speller_game::~Speller_game()
{
    delete ui;
}

void Speller_game::on_goBackButton_clicked()
{
    hide();
    EnglishWindow *englishwindow = new EnglishWindow(member, index, this);
    englishwindow->show();
}


void Speller_game::on_animalButton_clicked()
{
    hide();
    animalspeller = new SpellerPlay_game(member, index, VecAnimal, 0, this);
    animalspeller->show();
}

void Speller_game::on_foodButton_clicked()
{
    hide();
    foodspeller = new SpellerPlay_game(member, index, VecFood, 1, this);
    foodspeller->show();
}

void Speller_game::on_jobButton_clicked()
{
    hide();
    jobspeller = new SpellerPlay_game(member, index, VecJob, 2, this);
    jobspeller->show();
}

void Speller_game::on_placeButton_clicked()
{
    hide();
    placespeller = new SpellerPlay_game(member, index, VecPlace, 3, this);
    placespeller->show();
}

void Speller_game::on_thingButton_clicked()
{
    hide();
    thingspeller = new SpellerPlay_game(member, index, VecThing, 4, this);
    thingspeller->show();
}

void Speller_game::on_Info_flaggle_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("There will be 5 pictures.\n"
                               "You can choose 5 topics:\nAnimals, Foods, Jobs, Places, or Objects.\n\n"
                               "You can guess up to 2 times.\n"
                               "2 points: Correct guess in 1st time.\n"
                               "1 point:  Correct guess in 2nd time.\n"
                               "0 point:  Failed to guess correctly.\n");
    howtoplay->show();
}

