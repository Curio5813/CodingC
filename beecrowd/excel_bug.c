#include <stdio.h>
#include <string.h>

int main() {
	char s[50];

	while (scanf("%s", s) != EOF) {

		int len = strlen(s);

		// Limite de tamanho (Excel só vai até 3 letras: XFD)
		if (len > 3) {
			printf("Essa coluna nao existe Tobias!\n");
			continue;
		}

		long long idx = 0;

		// Converte estilo Excel: A=1, B=2... Z=26 (base 26)
		for (int i = 0; i < len; i++) {
			idx = idx * 26 + (s[i] - 'A' + 1);
		}

		// Excel termina em XFD (16384)
		if (idx > 16384) {
			printf("Essa coluna nao existe Tobias!\n");
		} else {
			printf("%lld\n", idx);
		}
	}

	return 0;
}
