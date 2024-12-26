import XCTest
import SwiftTreeSitter
import TreeSitterNpf

final class TreeSitterNpfTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_npf())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Npf grammar")
    }
}
