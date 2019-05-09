
// Generated from tinyrexx.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  tinyrexxParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T = 13, F = 14, 
    AND = 15, OR = 16, NOT = 17, MINUS = 18, PLUS = 19, MUL = 20, DIV = 21, 
    EQUAL = 22, DISEQUAL = 23, LT = 24, LEQ = 25, GT = 26, GEQ = 27, ID = 28, 
    NUMBER = 29, WS = 30, ErrorChar = 31
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleAssign = 2, RulePrint = 3, RuleInput = 4, 
    RuleW_loop = 5, RuleTest = 6, RuleI_t_e = 7, RuleIf_cond = 8, RuleDo_block = 9, 
    RuleElse_cond = 10, RuleA_expr = 11, RuleB_expr = 12, RuleA_op = 13, 
    RuleR_op = 14, RuleB_op = 15, RuleTerminate = 16
  };

  tinyrexxParser(antlr4::TokenStream *input);
  ~tinyrexxParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementContext;
  class AssignContext;
  class PrintContext;
  class InputContext;
  class W_loopContext;
  class TestContext;
  class I_t_eContext;
  class If_condContext;
  class Do_blockContext;
  class Else_condContext;
  class A_exprContext;
  class B_exprContext;
  class A_opContext;
  class R_opContext;
  class B_opContext;
  class TerminateContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignContext *assign();
    PrintContext *print();
    InputContext *input();
    W_loopContext *w_loop();
    I_t_eContext *i_t_e();
    B_exprContext *b_expr();
    TerminateContext *terminate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatementContext* statement();

  class  AssignContext : public antlr4::ParserRuleContext {
  public:
    AssignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    A_exprContext *a_expr();
    B_opContext *b_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AssignContext* assign();

  class  PrintContext : public antlr4::ParserRuleContext {
  public:
    PrintContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrintContext* print();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  InputContext* input();

  class  W_loopContext : public antlr4::ParserRuleContext {
  public:
    W_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TestContext *test();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  W_loopContext* w_loop();

  class  TestContext : public antlr4::ParserRuleContext {
  public:
    TestContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<A_exprContext *> a_expr();
    A_exprContext* a_expr(size_t i);
    R_opContext *r_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TestContext* test();

  class  I_t_eContext : public antlr4::ParserRuleContext {
  public:
    I_t_eContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    If_condContext *if_cond();
    std::vector<Do_blockContext *> do_block();
    Do_blockContext* do_block(size_t i);
    Else_condContext *else_cond();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  I_t_eContext* i_t_e();

  class  If_condContext : public antlr4::ParserRuleContext {
  public:
    If_condContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    B_opContext *b_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  If_condContext* if_cond();

  class  Do_blockContext : public antlr4::ParserRuleContext {
  public:
    Do_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_blockContext* do_block();

  class  Else_condContext : public antlr4::ParserRuleContext {
  public:
    Else_condContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Else_condContext* else_cond();

  class  A_exprContext : public antlr4::ParserRuleContext {
  public:
    A_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *NUMBER();
    std::vector<A_exprContext *> a_expr();
    A_exprContext* a_expr(size_t i);
    antlr4::tree::TerminalNode *MINUS();
    A_opContext *a_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  A_exprContext* a_expr();
  A_exprContext* a_expr(int precedence);
  class  B_exprContext : public antlr4::ParserRuleContext {
  public:
    B_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *T();
    antlr4::tree::TerminalNode *F();
    std::vector<B_exprContext *> b_expr();
    B_exprContext* b_expr(size_t i);
    antlr4::tree::TerminalNode *NOT();
    TestContext *test();
    B_opContext *b_op();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  B_exprContext* b_expr();
  B_exprContext* b_expr(int precedence);
  class  A_opContext : public antlr4::ParserRuleContext {
  public:
    A_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  A_opContext* a_op();

  class  R_opContext : public antlr4::ParserRuleContext {
  public:
    R_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *LEQ();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *DISEQUAL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  R_opContext* r_op();

  class  B_opContext : public antlr4::ParserRuleContext {
  public:
    B_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  B_opContext* b_op();

  class  TerminateContext : public antlr4::ParserRuleContext {
  public:
    TerminateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    A_exprContext *a_expr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TerminateContext* terminate();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool a_exprSempred(A_exprContext *_localctx, size_t predicateIndex);
  bool b_exprSempred(B_exprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

