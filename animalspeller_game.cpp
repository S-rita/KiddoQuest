#include "animalspeller_game.h"
#include "ui_animalspeller_game.h"
#include "gamecomplete.h"
#include "speller_game.h"
#include <QMessageBox>
#include <QPixmap>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QKeyEvent>

AnimalSpeller_game::AnimalSpeller_game(Members& member, int index, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::AnimalSpeller_game),
    member(member),
    index(index)
{
    ui->setupUi(this);
    timer.start();
    Objects a1("alligator", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/alligator.jpeg");
    Objects a2("anaconda", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/anaconda.jpeg");
    Objects a3("angelshark", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/angelshark.jpeg");
    Objects a4("ant", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/ant.jpeg");
    Objects a5("anteater", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/anteater.jpeg");
    Objects a6("antelope", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/antelope.jpeg");
    Objects a7("arctic fox", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/arctic fox.jpeg");
    Objects a8("arctic wolf", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/arctic wolf.jpeg");
    Objects a9("armadillo", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/armadillo.jpeg");
    Objects a10("baboon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/baboon.jpeg");
    Objects a11("badger", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/badger.jpeg");
    Objects a12("bat", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bat.jpeg");
    Objects a13("bear", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bear.jpeg");
    Objects a14("bearded dragon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bearded dragon.jpeg");
    Objects a15("beaver", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/beaver.jpeg");
    Objects a16("bee", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bee.jpeg");
    Objects a17("beetle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/beetle.jpeg");
    Objects a18("beluga whale", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/beluga whale.jpeg");
    Objects a19("bird", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bird.jpeg");
    Objects a20("bison", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bison.jpeg");
    Objects a21("black bear", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/black bear.jpeg");
    Objects a22("black swan", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/black swan.jpeg");
    Objects a23("blue whale", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/blue whale.jpeg");
    Objects a24("bobcat", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bobcat.jpeg");
    Objects a25("buffalo", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/buffalo.jpeg");
    Objects a26("bull", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bull.jpeg");
    Objects a27("bumblebee", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/bumblebee.jpeg");
    Objects a28("butterfly", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/butterfly.jpeg");
    Objects a29("camel", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/camel.jpeg");
    Objects a30("capybara", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/capybara.jpeg");
    Objects a31("cat", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/cat.jpeg");
    Objects a32("caterpillar", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/caterpillar.jpeg");
    Objects a33("centipede", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/centipede.jpeg");
    Objects a34("chameleon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/chameleon.jpeg");
    Objects a35("cheetah", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/cheetah.jpeg");
    Objects a36("chicken", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/chicken.jpeg");
    Objects a37("chimipanzee", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/chimipanzee.jpeg");
    Objects a38("chinchilla", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/chinchilla.jpeg");
    Objects a39("chipmunk", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/chipmunk.jpeg");
    Objects a40("clam", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/clam.jpeg");
    Objects a41("clownfish", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/clownfish.jpeg");
    Objects a42("cobra", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/cobra.jpeg");
    Objects a43("cockroach", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/cockroach.jpeg");
    Objects a44("cow", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/cow.jpeg");
    Objects a45("coyote", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/coyote.jpeg");
    Objects a46("crab", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/crab.jpeg");
    Objects a47("crocodile", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/crocodile.jpeg");
    Objects a48("crow", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/crow.jpeg");
    Objects a49("deer", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/deer.jpeg");
    Objects a50("dingo", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/dingo.jpeg");
    Objects a51("dinosaur", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/dinosaur.jpeg");
    Objects a52("dog", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/dog.jpeg");
    Objects a53("dolphin", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/dolphin.jpeg");
    Objects a54("donkey", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/donkey.jpeg");
    Objects a55("dove", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/dove.jpeg");
    Objects a56("dragonfly", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/dragonfly.jpeg");
    Objects a57("duck", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/duck.jpeg");
    Objects a58("eagle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/eagle.jpeg");
    Objects a59("eel", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/eel.jpeg");
    Objects a60("elephant", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/elephant.jpeg");
    Objects a61("emu", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/emu.jpeg");
    Objects a62("ferret", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/ferret.jpeg");
    Objects a63("firefly", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/firefly.jpeg");
    Objects a64("fish", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/fish.jpeg");
    Objects a65("flamingo", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/flamingo.jpeg");
    Objects a66("fly", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/fly.jpeg");
    Objects a67("fox", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/fox.jpeg");
    Objects a68("frog", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/frog.jpeg");
    Objects a69("gecko", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/gecko.jpeg");
    Objects a70("giraffe", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/giraffe.jpeg");
    Objects a71("goat", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/goat.jpeg");
    Objects a72("goldfish", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/goldfish.jpeg");
    Objects a73("goose", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/goose.jpeg");
    Objects a74("gorilla", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/gorilla.jpeg");
    Objects a75("grasshopper", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/grasshopper.jpeg");
    Objects a76("guinea pig", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/guinea pig.jpeg");
    Objects a77("hamster", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/hamster.jpeg");
    Objects a78("hedgehog", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/hedgehog.jpeg");
    Objects a79("hermit crab", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/hermit crab.jpeg");
    Objects a80("hippopotamus", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/hippopotamus.jpeg");
    Objects a81("horse", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/horse.jpeg");
    Objects a82("hummingbird", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/hummingbird.jpeg");
    Objects a83("hyena", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/hyena.jpeg");
    Objects a84("iguana", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/iguana.jpeg");
    Objects a85("jaguar", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/jaguar.jpeg");
    Objects a86("jellyfish", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/jellyfish.jpeg");
    Objects a87("kangaroo", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/kangaroo.jpeg");
    Objects a88("killer whale", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/killer whale.jpeg");
    Objects a89("kiwi", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/kiwi.jpeg");
    Objects a90("koala", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/koala.jpeg");
    Objects a91("komodo dragon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/komodo dragon.jpeg");
    Objects a92("ladybug", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/ladybug.jpeg");
    Objects a93("leopard", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/leopard.jpeg");
    Objects a94("lion", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/lion.jpeg");
    Objects a95("llama", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/llama.jpeg");
    Objects a96("lobster", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/lobster.jpeg");
    Objects a97("lynx", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/lynx.jpeg");
    Objects a98("mantis", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/mantis.jpeg");
    Objects a99("meerkat", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/meerkat.jpeg");
    Objects a100("monkey", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/monkey.jpeg");
    Objects a101("moose", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/moose.jpeg");
    Objects a102("mosquito", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/mosquito.jpeg");
    Objects a103("moth", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/moth.jpeg");
    Objects a104("mouse", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/mouse.jpeg");
    Objects a105("octopus", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/octopus.jpeg");
    Objects a106("opossum", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/opossum.jpeg");
    Objects a107("orangutan", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/orangutan.jpeg");
    Objects a108("ostrich", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/ostrich.jpeg");
    Objects a109("otter", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/otter.jpeg");
    Objects a110("owl", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/owl.jpeg");
    Objects a111("panda", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/panda.jpeg");
    Objects a112("panther", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/panther.jpeg");
    Objects a113("parrot", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/parrot.jpeg");
    Objects a114("pelican", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/pelican.jpeg");
    Objects a115("penguin", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/penguin.jpeg");
    Objects a116("pig", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/pig.jpeg");
    Objects a117("pigeon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/pigeon.jpeg");
    Objects a118("piranha", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/piranha.jpeg");
    Objects a119("platypus", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/platypus.jpeg");
    Objects a120("polar bear", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/polar bear.jpeg");
    Objects a121("porcupine", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/porcupine.jpeg");
    Objects a122("pufferfish", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/pufferfish.jpeg");
    Objects a123("quail", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/quail.jpeg");
    Objects a124("rabbit", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/rabbit.jpeg");
    Objects a125("raccoon", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/raccoon.jpeg");
    Objects a126("rat", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/rat.jpeg");
    Objects a127("rattlesnake", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/rattlesnake.jpeg");
    Objects a128("ray", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/ray.jpeg");
    Objects a129("red panda", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/red panda.jpeg");
    Objects a130("reindeer", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/reindeer.jpeg");
    Objects a131("rhino", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/rhino.jpeg");
    Objects a132("seahorse", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/seahorse.jpeg");
    Objects a133("seal", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/seal.jpeg");
    Objects a134("sealion", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/sealion.jpeg");
    Objects a135("shark", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/shark.jpeg");
    Objects a136("sheep", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/sheep.jpeg");
    Objects a137("skunk", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/skunk.jpeg");
    Objects a138("sloth", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/sloth.jpeg");
    Objects a139("slug", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/slug.jpeg");
    Objects a140("snail", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/snail.jpeg");
    Objects a141("snake", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/snake.jpeg");
    Objects a142("spider", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/spider.jpeg");
    Objects a143("squirrel", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/squirrel.jpeg");
    Objects a144("starfish", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/starfish.jpeg");
    Objects a145("swan", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/swan.jpeg");
    Objects a146("toad", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/toad.jpeg");
    Objects a147("tortoise", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/tortoise.jpeg");
    Objects a148("turkey", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/turkey.jpeg");
    Objects a149("turtle", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/turtle.jpeg");
    Objects a150("urchin", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/urchin.jpeg");
    Objects a151("walrus", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/walrus.jpeg");
    Objects a152("whale", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/whale.jpeg");
    Objects a153("wolf", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/wolf.jpeg");
    Objects a154("worm", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/worm.jpeg");
    Objects a155("yellowjacket", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/yellowjacket.jpeg");
    Objects a156("zebra", "/Users/gnar_p/KiddoQuest-main/image for c++ project/English/Speller/Animals/zebra.jpeg");

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
    if (currentRound >= totalRounds && totalScore == 0) {
        qint64 playtime = timer.elapsed();
        member.addSpellerProgress(playtime, totalScore, index);
        GameComplete AnimalSpellerLose;
        AnimalSpellerLose.setModal(true);
        AnimalSpellerLose.setScore(totalScore);
        AnimalSpellerLose.setTime(playtime);
        AnimalSpellerLose.lose();
        AnimalSpellerLose.exec() ;
        close();
        Speller_game *spellergame = new Speller_game(member, index, this);
        spellergame->show();
    }

    // Check if the guess is correct
    if (animal.getObjectName() == ans) {
        totalScore += (attemptsRemaining[currentRound] == 1) ? 2 : 1;
        currentRound++;

        // Check if the game has ended with a positive score
        if (currentRound >= totalRounds && totalScore > 0) {
            qint64 playtime = timer.elapsed();
            member.addSpellerProgress(playtime, totalScore, index);
            GameComplete AnimalSpellerComplete;
            AnimalSpellerComplete.setModal(true);
            AnimalSpellerComplete.setScore(totalScore);
            AnimalSpellerComplete.setTime(playtime);
            AnimalSpellerComplete.exec() ;
            close(); // Close the current window
            Speller_game *spellergame = new Speller_game(member, index, this);
            spellergame->show();
        }

        // Display number of question & score
        ui->guessLeftLabel->setText("You have 2 guesses left.");
        ui->scoreNumber->setText(QString::number(totalScore)); // Update score UI
        ui->questionNumber->setText(QString::number(currentRound + 1)); // Update question number UI

        // Display the next animal picture
        animal = VecAnimal[rand()%(VecAnimal.size())];
        while (animal.getObjectPath() == "-") {
            animal = VecAnimal[rand()%(VecAnimal.size())];
        }
        QPixmap animalpic(QString::fromStdString(animal.getObjectPath()));
        ui->animalPic->setPixmap(animalpic.scaled(ui->animalPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    } else {
        // Check if there are no more attempts left
        if (attemptsRemaining[currentRound] == 0) {
            ui->guessLeftLabel->setText("No more guesses left");
            std::string showAnswer = "Answer: " + animal.getObjectName();
            QMessageBox::information(this, tr("Answer"), tr(showAnswer.c_str()));

            // Display number of question & score
            ui->guessLeftLabel->setText("You have 2 guesses left.");
            ui->scoreNumber->setText(QString::number(totalScore));
            ui->questionNumber->setText(QString::number(currentRound + 2));

            // Display the next animal picture
            ui->guessLeftLabel->setText("You have 2 guesses left.");
            animal = VecAnimal[rand()%(VecAnimal.size())];
            while (animal.getObjectPath() == "-") {
                animal = VecAnimal[rand()%(VecAnimal.size())];
            }
            QPixmap animalpic(QString::fromStdString(animal.getObjectPath()));
            ui->animalPic->setPixmap(animalpic.scaled(ui->animalPic->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

            currentRound++; // Move to the next round

            // Check if the game has ended
            if (currentRound >= totalRounds && totalScore == 0) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete AnimalSpellerLose;
                AnimalSpellerLose.setModal(true);
                AnimalSpellerLose.lose();
                AnimalSpellerLose.setScore(totalScore);
                AnimalSpellerLose.setTime(playtime);
                AnimalSpellerLose.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
            } else if  (currentRound >= totalRounds && totalScore > 0) {
                qint64 playtime = timer.elapsed();
                member.addSpellerProgress(playtime, totalScore, index);
                GameComplete AnimalSpellerWin;
                AnimalSpellerWin.setModal(true);
                AnimalSpellerWin.setScore(totalScore);
                AnimalSpellerWin.setTime(playtime);
                AnimalSpellerWin.exec();
                close();
                Speller_game *spellergame = new Speller_game(member, index, this);
                spellergame->show();
            }
        } else {
            // Reduce the number of attempts left and inform the user
            attemptsRemaining[currentRound]--;
            ui->guessLeftLabel->setText("You have 1 guess left.");
        }
    }

    // Clear the guess entry
    ui->inputAnimal->clear();
}

void AnimalSpeller_game::on_exitButton_clicked()
{
    QMessageBox::StandardButton reply;

    reply = QMessageBox::question(this, "Exit", "Are you sure you want to quit the game?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        AnimalSpeller_game::close();
        Speller_game *spellerwindow = new Speller_game(member, index, this);
        spellerwindow->show();
    }
}

void AnimalSpeller_game::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Return) {
        event->accept();
        on_submitButton_clicked();
    } else if (event->key() == Qt::Key_Escape) {
        event->accept();
        on_exitButton_clicked();
    } else {
        QMainWindow::keyPressEvent(event);
    }
}

