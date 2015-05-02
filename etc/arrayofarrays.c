#include <stdio.h>
#include <string.h>

void find_track(char (*tracks)[80], char search_for[]);

int main()
{
    char tracks[][80] = {
        "I left my heart",
        "Newark, Newark - a wonderful town",
        "Dancing",
        "From here",
        "The girl"
    };

    char search_for[80];
    printf("Search for: ");
    //scanf("%79s", search_for);
    fgets(search_for, 80, stdin);
    search_for[strlen(search_for)-1] = '\0';
    printf("You are searching for '%s'\n", search_for);
    find_track(tracks, search_for);
    return 0;
}

void find_track(char (*tracks)[80], char search_for[])
{
    int i;
    for (i = 0; i < 5; i++) {
        if (strstr(tracks[i], search_for))
            printf("Track %i: '%s'\n", i + 1, tracks[i]);
    }
}

/*
strchr() = find the location of a character inside a string.
strcmp() = Compare two strings.
strstr() = find the location of a string inside another string.
strcpy() = copy one string to another.
strlen() = find the length of a string.
strcat() = Concatenate two strings.
*/
