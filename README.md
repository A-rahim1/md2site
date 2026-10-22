# md2site

A small static site generator written in C. It converts a folder of Markdown
files into a ready-to-host HTML website.

## Usage (planned)

    md2site content/ output/     # build the whole site
    md2site page.md              # convert one file, print HTML to the terminal

## Supported Markdown (v1)

- Headings (`#` to `######`)
- Paragraphs
- **Bold**, *italic*, `inline code`
- Links: `[text](url)`
- Bullet lists (`-`)
- Fenced code blocks

## Not supported (yet)

Images, tables, nested lists, numbered lists, blockquotes.

## How it works

1. Read each `.md` file line by line
2. Identify block types (heading, list, code block, paragraph)
3. Convert inline formatting inside each block
4. Wrap the result in an HTML template (`templates/default.html`)
5. Write the finished page to the output folder

## Status

Work in progress.

- [X] Project skeleton and Makefile
- [ ] Headings and paragraphs
- [ ] Inline formatting
- [ ] Lists and code blocks
- [ ] HTML template
- [ ] Whole site build
- [ ] Tests and valgrind



