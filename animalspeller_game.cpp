#include "animalspeller_game.h"
#include "ui_animalspeller_game.h"
#include "gamecomplete.h"
#include "speller_game.h"
#include <QElapsedTimer>
#include <QMessageBox>
#include <QPixmap>
#include <cstdlib>
#include <ctime>
#include <vector>

int currentRound_a = 0;
const int totalRounds_a = 5;
const int maxAttempts_a = 1; // Maximum attempts allowed for each picture
int totalScore_a = 0;
int attemptsRemaining_a[totalRounds_a] = { maxAttempts_a, maxAttempts_a, maxAttempts_a, maxAttempts_a, maxAttempts_a };
QElapsedTimer timerAnimal;

AnimalSpeller_game::AnimalSpeller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::AnimalSpeller_game),
    member(member),
    index(index)
{
    ui->setupUi(this);
    timerAnimal.start();
    Objects a1("alligator", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/alligator.jpeg");
    Objects a2("anaconda", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/anaconda.jpeg");
    Objects a3("angelshark", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/angelshark.jpeg");
    Objects a4("ant", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/ant.jpeg");
    Objects a5("anteater", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/anteater.jpeg");
    Objects a6("antelope", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/antelope.jpeg");
    Objects a7("arctic fox", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/arctic fox.jpeg");
    Objects a8("arctic wolf", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/arctic wolf.jpeg");
    Objects a9("armadillo", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/armadillo.jpeg");
    Objects a10("baboon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/baboon.jpeg");
    Objects a11("badger", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/badger.jpeg");
    Objects a12("bat", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bat.jpeg");
    Objects a13("bear", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bear.jpeg");
    Objects a14("bearded dragon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bearded dragon.jpeg");
    Objects a15("beaver", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/beaver.jpeg");
    Objects a16("bee", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bee.jpeg");
    Objects a17("beetle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/beetle.jpeg");
    Objects a18("beluga whale", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/beluga whale.jpeg");
    Objects a19("bird", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bird.jpeg");
    Objects a20("bison", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bison.jpeg");
    Objects a21("black bear", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/black bear.jpeg");
    Objects a22("black swan", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/black swan.jpeg");
    Objects a23("blue whale", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/blue whale.jpeg");
    Objects a24("bobcat", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bobcat.jpeg");
    Objects a25("buffalo", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/buffalo.jpeg");
    Objects a26("bull", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bull.jpeg");
    Objects a27("bumblebee", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/bumblebee.jpeg");
    Objects a28("butterfly", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/butterfly.jpeg");
    Objects a29("camel", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/camel.jpeg");
    Objects a30("capybara", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/capybara.jpeg");
    Objects a31("cat", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/cat.jpeg");
    Objects a32("caterpillar", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/caterpillar.jpeg");
    Objects a33("centipede", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/centipede.jpeg");
    Objects a34("chameleon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/chameleon.jpeg");
    Objects a35("cheetah", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/cheetah.jpeg");
    Objects a36("chicken", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/chicken.jpeg");
    Objects a37("chimipanzee", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/chimipanzee.jpeg");
    Objects a38("chinchilla", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/chinchilla.jpeg");
    Objects a39("chipmunk", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/chipmunk.jpeg");
    Objects a40("clam", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/clam.jpeg");
    Objects a41("clownfish", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/clownfish.jpeg");
    Objects a42("cobra", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/cobra.jpeg");
    Objects a43("cockroach", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/cockroach.jpeg");
    Objects a44("cow", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/cow.jpeg");
    Objects a45("coyote", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/coyote.jpeg");
    Objects a46("crab", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/crab.jpeg");
    Objects a47("crocodile", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/crocodile.jpeg");
    Objects a48("crow", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/crow.jpeg");
    Objects a49("deer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/deer.jpeg");
    Objects a50("dingo", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/dingo.jpeg");
    Objects a51("dinosaur", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/dinosaur.jpeg");
    Objects a52("dog", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/dog.jpeg");
    Objects a53("dolphin", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/dolphin.jpeg");
    Objects a54("donkey", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/donkey.jpeg");
    Objects a55("dove", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/dove.jpeg");
    Objects a56("dragonfly", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/dragonfly.jpeg");
    Objects a57("duck", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/duck.jpeg");
    Objects a58("eagle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/eagle.jpeg");
    Objects a59("eel", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/eel.jpeg");
    Objects a60("elephant", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/elephant.jpeg");
    Objects a61("emu", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/emu.jpeg");
    Objects a62("ferret", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/ferret.jpeg");
    Objects a63("firefly", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/firefly.jpeg");
    Objects a64("fish", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/fish.jpeg");
    Objects a65("flamingo", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/flamingo.jpeg");
    Objects a66("fly", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/fly.jpeg");
    Objects a67("fox", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/fox.jpeg");
    Objects a68("frog", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/frog.jpeg");
    Objects a69("gecko", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/gecko.jpeg");
    Objects a70("giraffe", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/giraffe.jpeg");
    Objects a71("goat", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/goat.jpeg");
    Objects a72("goldfish", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/goldfish.jpeg");
    Objects a73("goose", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/goose.jpeg");
    Objects a74("gorilla", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/gorilla.jpeg");
    Objects a75("grasshopper", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/grasshopper.jpeg");
    Objects a76("guinea pig", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/guinea pig.jpeg");
    Objects a77("hamster", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/hamster.jpeg");
    Objects a78("hedgehog", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/hedgehog.jpeg");
    Objects a79("hermit crab", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/hermit crab.jpeg");
    Objects a80("hippopotamus", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/hippopotamus.jpeg");
    Objects a81("horse", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/horse.jpeg");
    Objects a82("hummingbird", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/hummingbird.jpeg");
    Objects a83("hyena", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/hyena.jpeg");
    Objects a84("iguana", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/iguana.jpeg");
    Objects a85("jaguar", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/jaguar.jpeg");
    Objects a86("jellyfish", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/jellyfish.jpeg");
    Objects a87("kangaroo", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/kangaroo.jpeg");
    Objects a88("killer whale", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/killer whale.jpeg");
    Objects a89("kiwi", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/kiwi.jpeg");
    Objects a90("koala", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/koala.jpeg");
    Objects a91("komodo dragon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/komodo dragon.jpeg");
    Objects a92("ladybug", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/ladybug.jpeg");
    Objects a93("leopard", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/leopard.jpeg");
    Objects a94("lion", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/lion.jpeg");
    Objects a95("llama", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/llama.jpeg");
    Objects a96("lobster", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/lobster.jpeg");
    Objects a97("lynx", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/lynx.jpeg");
    Objects a98("mantis", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/mantis.jpeg");
    Objects a99("meerkat", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/meerkat.jpeg");
    Objects a100("monkey", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/monkey.jpeg");
    Objects a101("moose", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/moose.jpeg");
    Objects a102("mosquito", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/mosquito.jpeg");
    Objects a103("moth", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/moth.jpeg");
    Objects a104("mouse", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/mouse.jpeg");
    Objects a105("octopus", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/octopus.jpeg");
    Objects a106("opossum", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/opossum.jpeg");
    Objects a107("orangutan", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/orangutan.jpeg");
    Objects a108("ostrich", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/ostrich.jpeg");
    Objects a109("otter", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/otter.jpeg");
    Objects a110("owl", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/owl.jpeg");
    Objects a111("panda", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/panda.jpeg");
    Objects a112("panther", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/panther.jpeg");
    Objects a113("parrot", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/parrot.jpeg");
    Objects a114("pelican", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/pelican.jpeg");
    Objects a115("penguin", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/penguin.jpeg");
    Objects a116("pig", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/pig.jpeg");
    Objects a117("pigeon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/pigeon.jpeg");
    Objects a118("piranha", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/piranha.jpeg");
    Objects a119("platypus", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/platypus.jpeg");
    Objects a120("polar bear", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/polar bear.jpeg");
    Objects a121("porcupine", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/porcupine.jpeg");
    Objects a122("pufferfish", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/pufferfish.jpeg");
    Objects a123("quail", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/quail.jpeg");
    Objects a124("rabbit", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/rabbit.jpeg");
    Objects a125("raccoon", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/raccoon.jpeg");
    Objects a126("rat", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/rat.jpeg");
    Objects a127("rattlesnake", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/rattlesnake.jpeg");
    Objects a128("ray", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/ray.jpeg");
    Objects a129("red panda", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/red panda.jpeg");
    Objects a130("reindeer", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/reindeer.jpeg");
    Objects a131("rhino", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/rhino.jpeg");
    Objects a132("seahorse", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/seahorse.jpeg");
    Objects a133("seal", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/seal.jpeg");
    Objects a134("sealion", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/sealion.jpeg");
    Objects a135("shark", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/shark.jpeg");
    Objects a136("sheep", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/sheep.jpeg");
    Objects a137("skunk", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/skunk.jpeg");
    Objects a138("sloth", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/sloth.jpeg");
    Objects a139("slug", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/slug.jpeg");
    Objects a140("snail", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/snail.jpeg");
    Objects a141("snake", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/snake.jpeg");
    Objects a142("spider", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/spider.jpeg");
    Objects a143("squirrel", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/squirrel.jpeg");
    Objects a144("starfish", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/starfish.jpeg");
    Objects a145("swan", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/swan.jpeg");
    Objects a146("toad", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/toad.jpeg");
    Objects a147("tortoise", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/tortoise.jpeg");
    Objects a148("turkey", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/turkey.jpeg");
    Objects a149("turtle", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/turtle.jpeg");
    Objects a150("urchin", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/urchin.jpeg");
    Objects a151("walrus", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/walrus.jpeg");
    Objects a152("whale", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/whale.jpeg");
    Objects a153("wolf", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/wolf.jpeg");
    Objects a154("worm", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/worm.jpeg");
    Objects a155("yellowjacket", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/yellowjacket.jpeg");
    Objects a156("zebra", "C:/n/year1/Cpp/pj/KiddoQuest-1_Prang/image for c++ project/English/Speller/Animals/zebra.jpeg");

    VecAnimal = {a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20,
                 a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40,
                 a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60,
                 a61, a62, a63, a64, a65, a66, a67, a68, a69, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a80,
                 a81, a82, a83, a84, a85, a86, a87, a88, a89, a90, a91, a92, a93, a94, a95, a96, a97, a98, a99, a100,
                 a101, a102, a103, a104, a105, a106, a107, a108, a109, a110, a111, a112, a113, a114, a115, a116, a117, a118, a119, a120,
                 a121, a122, a123, a124, a125, a126, a127, a128, a129, a130, a131, a132, a133, a134, a135, a136, a137, a138, a139, a140,
                 a141, a142, a143, a144, a145, a146, a147, a148, a149, a150, a151, a152, a153, a154, a155, a156};

    srand(time(NULL));
    animal = VecAnimal[rand()%(VecAnimal.size())];
    while (animal.getObjectPath() == "-") {
        animal = VecAnimal[rand()%(VecAnimal.size())];
    }
    QPixmap animalpic(QString::fromStdString(animal.getObjectPath()));
    ui->animalPic->setPixmap(animalpic.scaled(ui->animalPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}


AnimalSpeller_game::~AnimalSpeller_game()
{
    delete ui;
}

void AnimalSpeller_game::on_submitButton_clicked()
{
    srand(time(NULL));

    std::string ans = ui->inputAnimal->text().toStdString();

    // Convert answer to lowercase
    std::transform(ans.begin(), ans.end(), ans.begin(),
                   [](unsigned char c) { return std::tolower(c); });


    // Check if the game is finished and the score is 0
    if (currentRound_a >= totalRounds_a && totalScore_a == 0) {
        QMessageBox::information(this, tr("Game Over"), tr("You have completed all rounds!"));
        close(); // Close the current window
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
        currentRound_a = 0;
        totalScore_a = 0;
    }

    // Check if the guess is correct
    if (animal.getObjectName() == ans) {
        totalScore_a += (attemptsRemaining_a[currentRound_a] == 1) ? 2 : 1;
        currentRound_a++;

        // Check if the game has ended with a positive score
        if (currentRound_a >= totalRounds_a && totalScore_a > 0) {
            qint64 playtime = timerAnimal.elapsed();
            member.addSpellerProgress(playtime, totalScore_a, index);
            GameComplete AnimalSpellerComplete;
            AnimalSpellerComplete.setModal(true);
            AnimalSpellerComplete.setScore(totalScore_a);
            AnimalSpellerComplete.setTime(playtime);
            AnimalSpellerComplete.exec() ;
            close(); // Close the current window
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
            currentRound_a = 0;
            totalScore_a = 0;
        }

        // Display number of question & score
        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore_a)); // Update score UI
        ui->questionNumber->setText(QString::number(currentRound_a + 1)); // Update question number UI

        // Display the next animal picture
        animal = VecAnimal[rand()%(VecAnimal.size())];
        while (animal.getObjectPath() == "-") {
            animal = VecAnimal[rand()%(VecAnimal.size())];
        }
        QPixmap animalpic(QString::fromStdString(animal.getObjectPath()));
        ui->animalPic->setPixmap(animalpic.scaled(ui->animalPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        // Check if there are no more attempts left
        if (attemptsRemaining_a[currentRound_a] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + animal.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            // Display number of question & score
            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore_a)); // Update score UI
            ui->questionNumber->setText(QString::number(currentRound_a + 1)); // Update question number UI

            // Display the next animal picture
            ui->guessLeftLabel->setText("You have 2 guesses left.");
            animal = VecAnimal[rand()%(VecAnimal.size())];
            while (animal.getObjectPath() == "-") {
                animal = VecAnimal[rand()%(VecAnimal.size())];
            }
            QPixmap animalpic(QString::fromStdString(animal.getObjectPath()));
            ui->animalPic->setPixmap(animalpic.scaled(ui->animalPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound_a++; // Move to the next round

            // Check if the game has ended
            if (currentRound_a >= totalRounds_a) {
                qint64 playtime = timerAnimal.elapsed();
                member.addSpellerProgress(playtime, totalScore_a, index);
                GameComplete AnimalSpellerComplete;
                AnimalSpellerComplete.setModal(true);
                AnimalSpellerComplete.setScore(totalScore_a);
                AnimalSpellerComplete.setTime(playtime);
                AnimalSpellerComplete.exec();
                close(); // Close the current window
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
                currentRound_a = 0;
                totalScore_a = 0;
            }
        } else {
            // Reduce the number of attempts left and inform the user
            attemptsRemaining_a[currentRound_a]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }

    // Clear the guess entry
    ui->inputAnimal->clear();
}
