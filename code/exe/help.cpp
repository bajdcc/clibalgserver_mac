#include "/include/io"

int main(int argc, char **argv) {
    set_fg(240, 200, 220);
    put_string("Commands:\n");
    put_string("\nSHELL\n");
    put_string("    history         - show command history\n");
    put_string("\nDIR ==> /bin\n");
    put_string("    help            - command help\n");
    put_string("    sh              - shell\n");
    put_string("    echo            - echo\n");
    put_string("    pipe            - pipe test\n");
    put_string("    whoami          - show user name\n");
    put_string("    cd              - change dir\n");
    put_string("    mkdir           - create dir\n");
    put_string("    pwd             - show current dir\n");
    put_string("    touch           - touch file\n");
    put_string("    ls              - list file\n");
    put_string("    ll              - list file(detailed)\n");
    put_string("    tree            - list file(tree)\n");
    put_string("    cat             - show file content\n");
    put_string("    rm              - delete file\n");
    put_string("    write           - write to file\n");
    put_string("    append          - append to file\n");
    put_string("    wc              - word count\n");
    put_string("    od              - show binary content\n");
    put_string("    head            - show head content\n");
    put_string("    tail            - show tail content\n");
    put_string("    ps              - show process information\n");
    put_string("\nDIR ==> /usr\n");
    put_string("    test            - test all cases\n");
    put_string("    test_rec        - test recursion\n");
    put_string("    test_fork       - test fork\n");
    put_string("    test_input      - test ui input\n");
    put_string("    test_resize     - test resize screen\n");
    put_string("    test_malloc     - test malloc and free\n");
    put_string("    test_struct     - test struct and linked list\n");
    put_string("    test_xtoa       - test itoa/dtoa/atoi\n");
    put_string("    test_vector     - test vector\n");
    put_string("    draw            - test draw function\n");
    put_string("    badapple        - test badapple animation\n");
    restore_fg();
    return 0;
}