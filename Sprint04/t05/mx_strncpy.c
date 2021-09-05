char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;

	while ((src[i] != '\0') && (i < len))
	{
		dst[i] = src[i];
		i++;
	}
	while ((dst[i] != '\0') && (i < len))
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
