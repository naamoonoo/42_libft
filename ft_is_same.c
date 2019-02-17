int ft_is_same(char *haystack, const char *needle)
{
    unsigned int i;
    unsigned int ans;

    i = -1;
    ans = 0;
    while (needle[++i])
        if (haystack[i] == needle[i])
            ans++;
    return (i == ans);
}
