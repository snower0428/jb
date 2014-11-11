//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TTStyledTextDelegate.h"

@class NSMutableArray, NSString, TTStyledBoxFrame, TTStyledElement, TTStyledText, UIColor, UIFont;

@interface TTStyledTextLabel : UIView <TTStyledTextDelegate>
{
    TTStyledText *_text;
    UIColor *_textColor;
    UIColor *_highlightedTextColor;
    UIFont *_font;
    int _textAlignment;
    struct UIEdgeInsets _contentInset;
    BOOL _highlighted;
    TTStyledElement *_highlightedNode;
    TTStyledBoxFrame *_highlightedFrame;
    NSMutableArray *_accessibilityElements;
}

@property(retain, nonatomic) TTStyledElement *highlightedNode; // @synthesize highlightedNode=_highlightedNode;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(retain, nonatomic) TTStyledText *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *html;
- (void)styledTextNeedsDisplay:(id)arg1;
- (void)copy:(id)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (int)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(int)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)accessibilityElements;
- (void)addAccessibilityElementsForNode:(id)arg1;
- (struct UIEdgeInsets)edgesForRect:(struct CGRect)arg1;
- (void)addAccessibilityElementFromFrame:(id)arg1 toFrame:(id)arg2 withEdges:(struct UIEdgeInsets)arg3;
- (id)combineTextFromFrame:(id)arg1 toFrame:(id)arg2;
- (void)setHighlightedFrame:(id)arg1;
- (void)setStyle:(id)arg1 forFrame:(id)arg2;
- (BOOL)isHighlighted;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

