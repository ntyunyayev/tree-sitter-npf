package tree_sitter_npf_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_npf "github.com/ntyunyayev/tree-sitter-npf/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_npf.Language())
	if language == nil {
		t.Errorf("Error loading Npf grammar")
	}
}
