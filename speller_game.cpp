#include "speller_game.h"
#include "ui_speller_game.h"
#include "englishwindow.h"
#include <QKeyEvent>

Speller_game::Speller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Speller_game)
    , member(member)
    , index(index)
{
    ui->setupUi(this);

    Objects a1("alligator", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/alligator.jpeg");
    Objects a2("anaconda", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/anaconda.jpeg");
    Objects a3("angelshark", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/angelshark.jpeg");
    Objects a4("ant", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/ant.jpeg");
    Objects a5("anteater", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/anteater.jpeg");
    Objects a6("antelope", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/antelope.jpeg");
    Objects a7("arctic fox", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/arctic fox.jpeg");
    Objects a8("arctic wolf", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/arctic wolf.jpeg");
    Objects a9("armadillo", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/armadillo.jpeg");
    Objects a10("baboon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/baboon.jpeg");
    Objects a11("badger", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/badger.jpeg");
    Objects a12("bat", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bat.jpeg");
    Objects a13("bear", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bear.jpeg");
    Objects a14("bearded dragon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bearded dragon.jpeg");
    Objects a15("beaver", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/beaver.jpeg");
    Objects a16("bee", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bee.jpeg");
    Objects a17("beetle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/beetle.jpeg");
    Objects a18("beluga whale", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/beluga whale.jpeg");
    Objects a19("bird", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bird.jpeg");
    Objects a20("bison", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bison.jpeg");
    Objects a21("black bear", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/black bear.jpeg");
    Objects a22("black swan", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/black swan.jpeg");
    Objects a23("blue whale", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/blue whale.jpeg");
    Objects a24("bobcat", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bobcat.jpeg");
    Objects a25("buffalo", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/buffalo.jpeg");
    Objects a26("bull", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bull.jpeg");
    Objects a27("bumblebee", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/bumblebee.jpeg");
    Objects a28("butterfly", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/butterfly.jpeg");
    Objects a29("camel", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/camel.jpeg");
    Objects a30("capybara", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/capybara.jpeg");
    Objects a31("cat", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/cat.jpeg");
    Objects a32("caterpillar", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/caterpillar.jpeg");
    Objects a33("centipede", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/centipede.jpeg");
    Objects a34("chameleon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/chameleon.jpeg");
    Objects a35("cheetah", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/cheetah.jpeg");
    Objects a36("chicken", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/chicken.jpeg");
    Objects a37("chimipanzee", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/chimipanzee.jpeg");
    Objects a38("chinchilla", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/chinchilla.jpeg");
    Objects a39("chipmunk", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/chipmunk.jpeg");
    Objects a40("clam", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/clam.jpeg");
    Objects a41("clownfish", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/clownfish.jpeg");
    Objects a42("cobra", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/cobra.jpeg");
    Objects a43("cockroach", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/cockroach.jpeg");
    Objects a44("cow", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/cow.jpeg");
    Objects a45("coyote", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/coyote.jpeg");
    Objects a46("crab", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/crab.jpeg");
    Objects a47("crocodile", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/crocodile.jpeg");
    Objects a48("crow", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/crow.jpeg");
    Objects a49("deer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/deer.jpeg");
    Objects a50("dingo", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/dingo.jpeg");
    Objects a51("dinosaur", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/dinosaur.jpeg");
    Objects a52("dog", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/dog.jpeg");
    Objects a53("dolphin", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/dolphin.jpeg");
    Objects a54("donkey", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/donkey.jpeg");
    Objects a55("dove", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/dove.jpeg");
    Objects a56("dragonfly", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/dragonfly.jpeg");
    Objects a57("duck", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/duck.jpeg");
    Objects a58("eagle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/eagle.jpeg");
    Objects a59("eel", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/eel.jpeg");
    Objects a60("elephant", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/elephant.jpeg");
    Objects a61("emu", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/emu.jpeg");
    Objects a62("ferret", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/ferret.jpeg");
    Objects a63("firefly", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/firefly.jpeg");
    Objects a64("fish", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/fish.jpeg");
    Objects a65("flamingo", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/flamingo.jpeg");
    Objects a66("fly", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/fly.jpeg");
    Objects a67("fox", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/fox.jpeg");
    Objects a68("frog", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/frog.jpeg");
    Objects a69("gecko", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/gecko.jpeg");
    Objects a70("giraffe", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/giraffe.jpeg");
    Objects a71("goat", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/goat.jpeg");
    Objects a72("goldfish", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/goldfish.jpeg");
    Objects a73("goose", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/goose.jpeg");
    Objects a74("gorilla", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/gorilla.jpeg");
    Objects a75("grasshopper", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/grasshopper.jpeg");
    Objects a76("guinea pig", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/guinea pig.jpeg");
    Objects a77("hamster", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/hamster.jpeg");
    Objects a78("hedgehog", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/hedgehog.jpeg");
    Objects a79("hermit crab", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/hermit crab.jpeg");
    Objects a80("hippopotamus", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/hippopotamus.jpeg");
    Objects a81("horse", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/horse.jpeg");
    Objects a82("hummingbird", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/hummingbird.jpeg");
    Objects a83("hyena", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/hyena.jpeg");
    Objects a84("iguana", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/iguana.jpeg");
    Objects a85("jaguar", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/jaguar.jpeg");
    Objects a86("jellyfish", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/jellyfish.jpeg");
    Objects a87("kangaroo", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/kangaroo.jpeg");
    Objects a88("killer whale", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/killer whale.jpeg");
    Objects a89("kiwi", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/kiwi.jpeg");
    Objects a90("koala", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/koala.jpeg");
    Objects a91("komodo dragon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/komodo dragon.jpeg");
    Objects a92("ladybug", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/ladybug.jpeg");
    Objects a93("leopard", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/leopard.jpeg");
    Objects a94("lion", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/lion.jpeg");
    Objects a95("llama", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/llama.jpeg");
    Objects a96("lobster", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/lobster.jpeg");
    Objects a97("lynx", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/lynx.jpeg");
    Objects a98("mantis", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/mantis.jpeg");
    Objects a99("meerkat", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/meerkat.jpeg");
    Objects a100("monkey", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/monkey.jpeg");
    Objects a101("moose", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/moose.jpeg");
    Objects a102("mosquito", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/mosquito.jpeg");
    Objects a103("moth", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/moth.jpeg");
    Objects a104("mouse", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/mouse.jpeg");
    Objects a105("octopus", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/octopus.jpeg");
    Objects a106("opossum", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/opossum.jpeg");
    Objects a107("orangutan", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/orangutan.jpeg");
    Objects a108("ostrich", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/ostrich.jpeg");
    Objects a109("otter", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/otter.jpeg");
    Objects a110("owl", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/owl.jpeg");
    Objects a111("panda", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/panda.jpeg");
    Objects a112("panther", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/panther.jpeg");
    Objects a113("parrot", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/parrot.jpeg");
    Objects a114("pelican", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/pelican.jpeg");
    Objects a115("penguin", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/penguin.jpeg");
    Objects a116("pig", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/pig.jpeg");
    Objects a117("pigeon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/pigeon.jpeg");
    Objects a118("piranha", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/piranha.jpeg");
    Objects a119("platypus", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/platypus.jpeg");
    Objects a120("polar bear", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/polar bear.jpeg");
    Objects a121("porcupine", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/porcupine.jpeg");
    Objects a122("pufferfish", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/pufferfish.jpeg");
    Objects a123("quail", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/quail.jpeg");
    Objects a124("rabbit", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/rabbit.jpeg");
    Objects a125("raccoon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/raccoon.jpeg");
    Objects a126("rat", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/rat.jpeg");
    Objects a127("rattlesnake", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/rattlesnake.jpeg");
    Objects a128("stringray", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/ray.jpeg");
    Objects a129("red panda", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/red panda.jpeg");
    Objects a130("reindeer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/reindeer.jpeg");
    Objects a131("rhino", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/rhino.jpeg");
    Objects a132("seahorse", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/seahorse.jpeg");
    Objects a133("seal", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/seal.jpeg");
    Objects a134("sealion", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/sealion.jpeg");
    Objects a135("shark", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/shark.jpeg");
    Objects a136("sheep", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/sheep.jpeg");
    Objects a137("skunk", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/skunk.jpeg");
    Objects a138("sloth", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/sloth.jpeg");
    Objects a139("slug", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/slug.jpeg");
    Objects a140("snail", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/snail.jpeg");
    Objects a141("snake", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/snake.jpeg");
    Objects a142("spider", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/spider.jpeg");
    Objects a143("squirrel", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/squirrel.jpeg");
    Objects a144("starfish", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/starfish.jpeg");
    Objects a145("swan", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/swan.jpeg");
    Objects a146("toad", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/toad.jpeg");
    Objects a147("tortoise", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/tortoise.jpeg");
    Objects a148("turkey", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/turkey.jpeg");
    Objects a149("turtle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/turtle.jpeg");
    Objects a150("urchin", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/urchin.jpeg");
    Objects a151("walrus", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/walrus.jpeg");
    Objects a152("whale", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/whale.jpeg");
    Objects a153("wolf", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/wolf.jpeg");
    Objects a154("worm", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/worm.jpeg");
    Objects a155("yellowjacket", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/yellowjacket.jpeg");
    Objects a156("zebra", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Animals/zebra.jpeg");

    VecAnimal = {a1,   a2,   a3,   a4,   a5,   a6,   a7,   a8,   a9,   a10,  a11,  a12,  a13,
               a14,  a15,  a16,  a17,  a18,  a19,  a20,  a21,  a22,  a23,  a24,  a25,  a26,
               a27,  a28,  a29,  a30,  a31,  a32,  a33,  a34,  a35,  a36,  a37,  a38,  a39,
               a40,  a41,  a42,  a43,  a44,  a45,  a46,  a47,  a48,  a49,  a50,  a51,  a52,
               a53,  a54,  a55,  a56,  a57,  a58,  a59,  a60,  a61,  a62,  a63,  a64,  a65,
               a66,  a67,  a68,  a69,  a70,  a71,  a72,  a73,  a74,  a75,  a76,  a77,  a78,
               a79,  a80,  a81,  a82,  a83,  a84,  a85,  a86,  a87,  a88,  a89,  a90,  a91,
               a92,  a93,  a94,  a95,  a96,  a97,  a98,  a99,  a100, a101, a102, a103, a104,
               a105, a106, a107, a108, a109, a110, a111, a112, a113, a114, a115, a116, a117,
               a118, a119, a120, a121, a122, a123, a124, a125, a126, a127, a128, a129, a130,
               a131, a132, a133, a134, a135, a136, a137, a138, a139, a140, a141, a142, a143,
               a144, a145, a146, a147, a148, a149, a150, a151, a152, a153, a154, a155, a156};

    Objects f1("almond", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/almond.jpeg");
    Objects f2("apple", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/apple.jpeg");
    Objects f3("asparagus", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/asparagus.jpeg");
    Objects f4("avocado", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/avocado.jpeg");
    Objects f5("bacon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/bacon.jpeg");
    Objects f6("bagel", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/bagel.jpeg");
    Objects f7("bbq", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/bbq.jpeg");
    Objects f8("beer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/beer.jpeg");
    Objects f9("bread", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/bread.jpeg");
    Objects f10("broccoli", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/broccoli.jpeg");
    Objects f11("bruschetta", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/bruschetta.jpeg");
    Objects f12("burrito", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/burrito.jpeg");
    Objects f13("cake", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/cake.jpeg");
    Objects f14("carrot", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/carrot.jpeg");
    Objects f15("celery", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/celery.jpeg");
    Objects f16("cereal", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/cereal.jpeg");
    Objects f17("cheese", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/cheese.jpeg");
    Objects f18("chocolate", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/chocolate.jpeg");
    Objects f19("coffee", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/coffee.jpeg");
    Objects f20("cookie", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/cookie.jpeg");
    Objects f21("cupcake", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/cupcake.jpeg");
    Objects f22("curry", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/curry.jpeg");
    Objects f23("donut", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/donut.jpeg");
    Objects f24("gyoza", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/gyoza.jpeg");
    Objects f25("fondue", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/fondue.jpeg");
    Objects f26("french toast", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/french toast.jpeg");
    Objects f27("gnocchi", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/gnocchi.jpeg");
    Objects f28("granola", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/granola.jpeg");
    Objects f29("guacamole", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/guacamole.jpeg");
    Objects f30("ham", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/ham.jpeg");
    Objects f31("hamburger", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/hamburger.jpeg");
    Objects f32("hot dog", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/hot dog.jpeg");
    Objects f33("ice cream", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/ice cream.jpeg");
    Objects f34("jelly", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/jelly.jpeg");
    Objects f35("ketchup", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/ketchup.jpeg");
    Objects f36("kimchi", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/kimchi.jpeg");
    Objects f37("lasagna", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/lasagna.jpeg");
    Objects f38("lobster", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/lobster.jpeg");
    Objects f39("milkshake", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/milkshake.jpeg");
    Objects f40("noodle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/noodle.jpeg");
    Objects f41("pad kra pao", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/pad kra pao.jpeg");
    Objects f42("pad thai", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/pad thai.jpeg");
    Objects f43("pancake", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/pancake.jpeg");
    Objects f44("pizza", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/pizza.jpeg");
    Objects f45("quesadilla", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/quesadilla.jpeg");
    Objects f46("ramen", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/ramen.jpeg");
    Objects f47("spaghetti", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/spaghetti.jpeg");
    Objects f48("sushi", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/sushi.jpeg");
    Objects f49("waffle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/waffle.jpeg");
    Objects f50("wine", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/wine.jpeg");
    Objects f51("yogurt", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/yogurt.jpeg");
    Objects f52("zucchini", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/zucchini.jpeg");
    Objects f53("sausage", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/sausage.jpeg");
    Objects f54("lollipop", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/lollipop.jpeg");
    Objects f55("mushroom", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/mushroom.jpeg");
    Objects f56("truffle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/truffle.jpeg");
    Objects f57("oatmeal", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/oatmeal.jpeg");
    Objects f58("baguette", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/baguette.jpeg");
    Objects f59("edamame", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/edamame.jpeg");
    Objects f60("ginger", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/ginger.jpeg");
    Objects f61("dumplings", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/dumplings.jpeg");
    Objects f62("kiwi", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/kiwi.jpeg");
    Objects f63("banana", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/banana.jpeg");
    Objects f64("watermelon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/watermelon.jpeg");
    Objects f65("peach", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/peach.jpeg");
    Objects f66("lemon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/lemon.jpeg");
    Objects f67("cherry", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/cherry.jpeg");
    Objects f68("strawberry", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/strawberry.jpeg");
    Objects f69("rice", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/rice.jpeg");
    Objects f70("egg", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/egg.jpeg");
    Objects f71("salad", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/salad.jpeg");
    Objects f72("fried chicken", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/fried chicken.jpeg");
    Objects f73("scrambled eggs", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/scrambled eggs.jpeg");
    Objects f74("fish and chips", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/fish and chips.jpeg");
    Objects f75("garlic", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/garlic.jpeg");
    Objects f76("milk", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/milk.jpeg");
    Objects f77("butter", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/oatmeal.jpeg");
    Objects f78("popcorn", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/popcorn.jpeg");
    Objects f79("nugget", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/nugget.jpeg");
    Objects f80("caviar", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Foods/caviar.jpeg");

    VecFood = {f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15, f16, f17, f18, f19, f20,
               f21, f22, f23, f24, f25, f26, f27, f28, f29, f30, f31, f32, f33, f34, f35, f36, f37, f38, f39, f40,
               f41, f42, f43, f44, f45, f46, f47, f48, f49, f50, f51, f52, f53, f54, f55, f56, f57, f58, f59, f60,
               f61, f62, f63, f64, f65, f66, f67, f68, f69, f70, f71, f72, f73, f74, f75, f76, f77, f78, f79, f80};

    Objects j1("accountant", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/accountant.jpeg");
    Objects j2("actor", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/actor.jpeg");
    Objects j3("actress", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/actress.jpeg");
    Objects j4("architect", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/architect.jpeg");
    Objects j5("artist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/artist.jpeg");
    Objects j6("athelete", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/athelete.jpeg");
    Objects j7("baker", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/baker fox.jpeg");
    Objects j8("bank teller", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/bank teller.jpeg");
    Objects j9("barista", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/barista.jpeg");
    Objects j10("bus driver", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/bus driver.jpeg");
    Objects j11("butcher", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/butcher.jpeg");
    Objects j12("cabin crew", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/cabin crew.jpeg");
    Objects j13("carpenter", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/carpenter.jpeg");
    Objects j14("ceo", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/ceo.jpeg");
    Objects j15("chef", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/chef.jpeg");
    Objects j16("chemist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/chemist.jpeg");
    Objects j17("choreographer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/choreographer.jpeg");
    Objects j18("cleaner", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/cleaner.jpeg");
    Objects j19("clown", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/clown.jpeg");
    Objects j20("comedian", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/comedian.jpeg");
    Objects j21("dancer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/dancer.jpeg");
    Objects j22("delivery driver", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/delivery driver.jpeg");
    Objects j23("dentist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/dentist.jpeg");
    Objects j24("dj", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/dj.jpeg");
    Objects j25("doctor", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/doctor.jpeg");
    Objects j26("ecologist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/ecologist.jpeg");
    Objects j27("editor", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/editor.jpeg");
    Objects j28("electrician", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/electrician.jpeg");
    Objects j29("estate agent", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/estate agent.jpeg");
    Objects j30("farmer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/farmer.jpeg");
    Objects j31("fashion designer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/fashion designer.jpeg");
    Objects j32("film director", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/film director.jpeg");
    Objects j33("firefighter", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/firefighter.jpeg");
    Objects j34("florist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/florist.jpeg");
    Objects j35("geologist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/geologist.jpeg");
    Objects j36("graphic designer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/graphic designer.jpeg");
    Objects j37("hairdresser", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/hairdresser.jpeg");
    Objects j38("journalist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/journalist.jpeg");
    Objects j39("judge", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/judge.jpeg");
    Objects j40("lawyer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/lawyer.jpeg");
    Objects j41("librarian", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/librarian.jpeg");
    Objects j42("lifeguard", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/lifeguard.jpeg");
    Objects j43("make up artist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/make up artist.jpeg");
    Objects j44("model", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/model.jpeg");
    Objects j45("monk", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/monk.jpeg");
    Objects j46("musician", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/musician.jpeg");
    Objects j47("nanny", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/nanny.jpeg");
    Objects j48("news reporter", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/news reporter.jpeg");
    Objects j49("nurse", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/nurse.jpeg");
    Objects j50("paleontologist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/paleontologist.jpeg");
    Objects j51("paramedic", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/paramedic.jpeg");
    Objects j52("pastor", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/pastor.jpeg");
    Objects j53("personal trainer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/personal trainer.jpeg");
    Objects j54("photographer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/photographer.jpeg");
    Objects j55("physicist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/physicist.jpeg");
    Objects j56("pilot", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/pilot.jpeg");
    Objects j57("police", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/police.jpeg");
    Objects j58("politician", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/politician.jpeg");
    Objects j59("receptionist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/receptionist.jpeg");
    Objects j60("scientist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/scientist.jpeg");
    Objects j61("programmer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/software developer.jpeg");
    Objects j62("soldier", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/soldier.jpeg");
    Objects j63("surgeon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/surgeon.jpeg");
    Objects j64("taxi driver", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/taxi driver.jpeg");
    Objects j65("teacher", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/teacher.jpeg");
    Objects j66("vet", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/vet.jpeg");
    Objects j67("vlogger", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/vlogger.jpeg");
    Objects j68("waitress", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/waitress.jpeg");
    Objects j69("youtuber", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/youtuber.jpeg");
    Objects j70("cashier", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/cashier.jpeg");
    Objects j71("therapist", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/therapist.jpeg");
    Objects j72("astraunaut", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/astraunaut.jpeg");
    Objects j73("ballet dancer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/ballet dancer.jpeg");
    Objects j74("tour guide", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/tour guide.jpeg");
    Objects j75("sailor", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/sailor.jpeg");
    Objects j76("maid", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/maid.jpeg");
    Objects j77("bellboy", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/bellboy.jpeg");
    Objects j78("miner", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/miner.jpeg");
    Objects j79("magician", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/magician.jpeg");
    Objects j80("student", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Jobs/student.jpeg");

    VecJob = {j1, j2, j3, j4, j5, j6, j7, j8, j9, j10, j11, j12, j13, j14, j15, j16, j17, j18, j19, j20,
              j21, j22, j23, j24, j25, j26, j27, j28, j29, j30, j31, j32, j33, j34, j35, j36, j37, j38, j39, j40,
              j41, j42, j43, j44, j45, j46, j47, j48, j49, j50, j51, j52, j53, j54, j55, j56, j57, j58, j59, j60,
              j61, j62, j63, j64, j65, j66, j67, j68, j69, j70, j71, j72, j73, j74, j75, j76, j77, j78, j79, j80};


    Objects p1("airport", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/airport.jpeg");
    Objects p2("amusement park", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/amusement park.jpeg");
    Objects p3("aquarium", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/aquarium.jpeg");
    Objects p4("art gallery", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/art gallery.jpeg");
    Objects p5("bakery", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/bakery.jpeg");
    Objects p6("beach", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/beach.jpeg");
    Objects p7("bookstore", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/bookstore.jpeg");
    Objects p8("bowling alley", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/bowling alley.jpeg");
    Objects p9("bridge", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/bridge.jpeg");
    Objects p10("bus station", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/bus station.jpeg");
    Objects p11("cafe", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/cafe.jpeg");
    Objects p12("cathedral", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/cathedral.jpeg");
    Objects p13("church", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/church.jpeg");
    Objects p14("cinema", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/cinema.jpeg");
    Objects p15("convenient store", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/convenient store.jpeg");
    Objects p16("cruise", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/cruise.jpeg");
    Objects p17("desert", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/desert.jpeg");
    Objects p18("electronics store", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/electronics store.jpeg");
    Objects p19("factory", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/factory.jpeg");
    Objects p20("farm", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/farm.jpeg");
    Objects p21("fire station", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/fire station.jpeg");
    Objects p22("forest", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/forest.jpeg");
    Objects p23("furniture store", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/furniture store.jpeg");
    Objects p24("gas station", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/gas station.jpeg");
    Objects p25("greenhouse", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/greenhouse.jpeg");
    Objects p26("gym", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/gym.jpeg");
    Objects p27("hair salon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/hair salon.jpeg");
    Objects p28("hospital", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/hospital.jpeg");
    Objects p29("hotel", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/hotel.jpeg");
    Objects p30("house", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/house.jpeg");
    Objects p31("lecture hall", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/lecture hall.jpeg");
    Objects p32("libraby", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/libraby.jpeg");
    Objects p33("mall", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/mall.jpeg");
    Objects p34("musuem", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/musuem.jpeg");
    Objects p35("nightclub", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/nightclub.jpeg");
    Objects p36("office", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/office.jpeg");
    Objects p37("palace", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/palace.jpeg");
    Objects p38("park", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/park.jpeg");
    Objects p39("pet shop", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/pet shop.jpeg");
    Objects p40("pharmacy", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/pharmacy.jpeg");
    Objects p41("playground", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/play ground.jpeg");
    Objects p42("police station", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/police station.jpeg");
    Objects p43("port", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/port.jpeg");
    Objects p44("post office", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/post office.jpeg");
    Objects p45("restaurant", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/restaurant.jpeg");
    Objects p46("school", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/school.jpeg");
    Objects p47("shoe store", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/shoe store.jpeg");
    Objects p48("skyscraper", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/skyscraper.jpeg");
    Objects p49("spa", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/spa.jpeg");
    Objects p50("stadium", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/stadium.jpeg");
    Objects p51("supermarket", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/supermarket.jpeg");
    Objects p52("temple", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/temple.jpeg");
    Objects p53("theater", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/theater.jpeg");
    Objects p54("tree house", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/tree house.jpeg");
    Objects p55("university", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/university.jpeg");
    Objects p56("zoo", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/zoo.jpeg");
    Objects p57("nail salon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/nail salon.jpeg");
    Objects p58("national park", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/national park.jpeg");
    Objects p59("grooming salon", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/grooming salon.jpeg");
    Objects p60("laundromat", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/laundromat.jpeg");
    Objects p61("prison", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/prison.jpeg");
    Objects p62("garage", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/garage.jpeg");
    Objects p63("swimming pool", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/swimming pool.jpeg");
    Objects p64("train station", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/train station.jpeg");
    Objects p65("market", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/market.jpeg");
    Objects p66("bar", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/bar.jpeg");
    Objects p67("eiffle tower", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/eiffle tower.jpeg");
    Objects p68("court", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/court.jpeg");
    Objects p69("pyramid", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/pyramid.jpeg");
    Objects p70("leaning tower of pisa", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/leaning tower of pisa.jpeg");
    Objects p71("the great wall of china", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/the great wall of china.jpeg");
    Objects p72("taj mahal", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/taj mahal.jpeg");
    Objects p73("london bridge", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/london bridge.jpeg");
    Objects p74("stonehenge", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/stonehenge.jpeg");
    Objects p75("pyramid of giza", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/pyramid of giza.jpeg");
    Objects p76("mount rushmore", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/mount rushmore.jpeg");
    Objects p77("bigben", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/bigben.jpeg");
    Objects p78("the white house", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/the white house.jpeg");
    Objects p79("statue of liberty", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/statue of liberty.jpeg");
    Objects p80("empire state building", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Places/empire state building.jpeg");

    VecPlace = {p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19, p20,
                p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32, p33, p34, p35, p36, p37, p38, p39, p40,
                p41, p42, p43, p44, p45, p46, p47, p48, p49, p50, p51, p52, p53, p54, p55, p56, p57, p58, p59, p60,
                p61, p62, p63, p64, p65, p66, p67, p68, p69, p70, p71, p72, p73, p74, p75, p76, p77, p78, p79, p80};

    Objects t1("anchor", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/anchor.jpeg");
    Objects t2("apron", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/apron.jpeg");
    Objects t3("backpack", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/backpack.jpeg");
    Objects t4("baseball", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/baseball.jpeg");
    Objects t5("basketball", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/basketball.jpeg");
    Objects t6("bicycle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/bicycle.jpeg");
    Objects t7("camera", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/camera.jpeg");
    Objects t8("candle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/candle.jpeg");
    Objects t9("clock", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/clock.jpeg");
    Objects t10("computer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/computer.jpeg");
    Objects t11("diamond", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/diamond.jpeg");
    Objects t12("dice", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/dice.jpeg");
    Objects t13("drum", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/drum.jpeg");
    Objects t14("fireworks", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/fireworks.jpeg");
    Objects t15("football", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/football.jpeg");
    Objects t16("gift", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/gift.jpeg");
    Objects t17("glasses", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/glasses.jpeg");
    Objects t18("gloves", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/gloves.jpeg");
    Objects t19("hammer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/hammer.jpeg");
    Objects t20("igloo", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/igloo.jpeg");
    Objects t21("ink", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/ink.jpeg");
    Objects t22("jewelry", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/jewelry.jpeg");
    Objects t23("jigsaw", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/jigsaw puzzle.jpeg");
    Objects t24("kettle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/kettle.jpeg");
    Objects t25("keyboard", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/keyboard.jpeg");
    Objects t26("kite", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/kite.jpeg");
    Objects t27("lamborghini", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/lamborghini.jpeg");
    Objects t28("lantern", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/lantern.jpeg");
    Objects t29("lava", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/lava.jpeg");
    Objects t30("mailbox", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/mailbox.jpeg");
    Objects t31("mirror", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/mirror.jpeg");
    Objects t32("money", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/money.jpeg");
    Objects t33("printer", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/printer.jpeg");
    Objects t34("raft", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/raft.jpeg");
    Objects t35("saddle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/saddle.jpeg");
    Objects t36("scissors", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/scissors.jpeg");
    Objects t37("tape", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/tape.jpeg");
    Objects t38("throne", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/throne.jpeg");
    Objects t39("tie", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/tie.jpeg");
    Objects t40("umbrella", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/umbrella.jpeg");
    Objects t41("xylophone", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/xylophone.jpeg");
    Objects t42("zipper", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/zipper.jpeg");
    Objects t43("key", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/key.jpeg");
    Objects t44("lamp", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/lamp.jpeg");
    Objects t45("radio", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/radio.jpeg");
    Objects t46("toaster", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/toaster.jpeg");
    Objects t47("telescope", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/telescope.jpeg");
    Objects t48("vase", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/vase.jpeg");
    Objects t49("helmet", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/helmet.jpeg");
    Objects t50("satellite", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/satellite.jpeg");
    Objects t51("binoculars", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/binoculars.jpeg");
    Objects t52("fishing rod", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/fishing rod.jpeg");
    Objects t53("headphones", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/headphones.jpeg");
    Objects t54("compass", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/compass.jpeg");
    Objects t55("hammock", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/hammock.jpeg");
    Objects t56("rubik's cube", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/rubik's cube.jpeg");
    Objects t57("vinyl", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/vinyl.jpeg");
    Objects t58("drone", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/drone.jpeg");
    Objects t59("skateboard", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/skateboard.jpeg");
    Objects t60("surfboard", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/surfboard.jpeg");
    Objects t61("snowboard", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/snowboard.jpeg");
    Objects t62("frisbee", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/frisbee.jpeg");
    Objects t63("calculator", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/calculator.jpeg");
    Objects t64("sleeping mask", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/sleeping mask.jpeg");
    Objects t65("magnifying glass", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/magnifying glass.jpeg");
    Objects t66("microphone", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/microphone.jpeg");
    Objects t67("flask", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/flask.jpeg");
    Objects t68("dumbbell", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/dumbbell.jpeg");
    Objects t69("flashlight", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/flashlight.jpeg");
    Objects t70("whistle", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/whistle.jpeg");
    Objects t71("tongs", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/tongs.jpeg");
    Objects t72("matches", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/matches.jpeg");
    Objects t73("microscope", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/microscope.jpeg");
    Objects t74("whisk", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/whisk.jpeg");
    Objects t75("slinky", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/slinky.jpeg");
    Objects t76("floss", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/floss.jpeg");
    Objects t77("shovel", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/shovel.jpeg");
    Objects t78("broom", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/broom.jpeg");
    Objects t79("key", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/key.jpeg");
    Objects t80("face mask", "C:/n/year1/cpp/pj/KiddoQuest-main/image for c++ project/English/Speller/Things/face mask.jpeg");

    VecThing = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20,
                t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40,
                t41, t42, t43, t44, t45, t46, t47, t48, t49, t50, t51, t52, t53, t54, t55, t56, t57, t58, t59, t60,
                t61, t62, t63, t64, t65, t66, t67, t68, t69, t70, t71, t72, t73, t74, t75, t76, t77, t78, t79, t80};
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
    speller = new SpellerPlay_game(member, index, VecAnimal, 0, this);
    speller->show();
}

void Speller_game::on_foodButton_clicked()
{
    hide();
    speller = new SpellerPlay_game(member, index, VecFood, 1, this);
    speller->show();
}

void Speller_game::on_jobButton_clicked()
{
    hide();
    speller = new SpellerPlay_game(member, index, VecJob, 2, this);
    speller->show();
}

void Speller_game::on_placeButton_clicked()
{
    hide();
    speller = new SpellerPlay_game(member, index, VecPlace, 3, this);
    speller->show();
}

void Speller_game::on_thingButton_clicked()
{
    hide();
    speller = new SpellerPlay_game(member, index, VecThing, 4, this);
    speller->show();
}

void Speller_game::on_Info_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("For each game, there're 5 pictures.\n\n"
                               "You can guess up to 2 times.\n"
                               "2 points: Correct guess in 1st time.\n"
                               "1 point:  Correct guess in 2nd time.\n"
                               "0 point:  Failed to guess correctly.\n");
    howtoplay->show();
}

void Speller_game::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Shift) {
        event->accept();
        on_goBackButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}
