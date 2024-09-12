
```markdown
# Sistema de Gestão de Biblioteca

## Descrição

O **Sistema de Gestão de Biblioteca** é um projeto de software desenvolvido em C++ que simula o gerenciamento de uma biblioteca. O sistema permite adicionar livros e usuários, emprestar e devolver livros, e consultar o status dos livros e usuários.

## Estrutura do Projeto

A estrutura do projeto é a seguinte:

```
/SeuProjeto
    /src
        main.cpp          - Ponto de entrada do programa.
        User.cpp          - Implementação da classe User.
        Library.cpp       - Implementação da classe Library.
        Book.cpp          - Implementação da classe Book.
        utils.cpp         - Implementação das funções utilitárias.
    /include
        User.h            - Declaração da classe User.
        Library.h         - Declaração da classe Library.
        Book.h            - Declaração da classe Book.
        utils.h           - Declaração das funções utilitárias.
```

## Compilação

Para compilar o projeto, utilize o compilador `g++`. No PowerShell, navegue até o diretório do projeto e execute o seguinte comando:

```powershell
g++ -Iinclude -o Biblioteca src/main.cpp src/User.cpp src/Library.cpp src/Book.cpp src/utils.cpp
```

Aqui está o que o comando faz:
- `g++`: O compilador C++.
- `-Iinclude`: Especifica o diretório onde estão os arquivos de cabeçalho (`.h`).
- `-o Biblioteca`: Define o nome do executável gerado.
- `src/main.cpp src/User.cpp src/Library.cpp src/Book.cpp src/utils.cpp`: Lista os arquivos de código-fonte a serem compilados.

## Execução

Após a compilação, você pode executar o programa gerado com o seguinte comando:

```powershell
.\Biblioteca.exe
```

## Funcionalidades

- **Adicionar Livros:** Adiciona novos livros à biblioteca.
- **Adicionar Usuários:** Adiciona novos usuários ao sistema.
- **Emprestar Livros:** Permite que um usuário empreste um livro, se estiver disponível.
- **Devolver Livros:** Permite que um usuário devolva um livro emprestado.
- **Consultar Status:** Verifica se um livro está disponível e a lista de livros emprestados por um usuário.

## Como Usar

1. **Adicione livros e usuários ao sistema** utilizando as funções apropriadas.
2. **Empreste e devolva livros** conforme necessário.
3. **Consulte o status dos livros e usuários** para verificar a disponibilidade e o histórico de empréstimos.

## Dependências

Este projeto é desenvolvido em C++ e utiliza as seguintes bibliotecas padrão:
- `iostream`
- `vector`
- `string`

## Contribuições

Contribuições são bem-vindas! Se você deseja contribuir para o projeto, siga estas etapas:
1. Faça um fork do repositório.
2. Crie uma branch para sua nova funcionalidade ou correção.
3. Faça suas alterações e adicione testes.
4. Envie um pull request para o branch principal.



