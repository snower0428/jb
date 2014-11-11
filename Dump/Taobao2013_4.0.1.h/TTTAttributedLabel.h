//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "TTTAttributedLabel.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSAttributedString, NSDataDetector, NSDictionary, NSString, NSTextCheckingResult, UIColor;

@interface TTTAttributedLabel : UILabel <TTTAttributedLabel, UIGestureRecognizerDelegate>
{
    BOOL _needsFramesetter;
    NSAttributedString *_attributedText;
    NSAttributedString *_inactiveAttributedText;
    NSAttributedString *_renderedAttributedText;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    id <TTTAttributedLabelDelegate> _delegate;
    unsigned int _dataDetectorTypes;
    NSDataDetector *_dataDetector;
    NSArray *_links;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    float _shadowRadius;
    float _highlightedShadowRadius;
    UIColor *_highlightedShadowColor;
    float _leading;
    float _lineHeightMultiple;
    float _firstLineIndent;
    int _verticalAlignment;
    NSString *_truncationTokenString;
    NSTextCheckingResult *_activeLink;
    struct CGSize _highlightedShadowOffset;
    struct UIEdgeInsets _textInsets;
}

@property(retain, nonatomic) NSTextCheckingResult *activeLink; // @synthesize activeLink=_activeLink;
@property(retain, nonatomic) NSString *truncationTokenString; // @synthesize truncationTokenString=_truncationTokenString;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) float firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
@property(nonatomic) float lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) float leading; // @synthesize leading=_leading;
@property(retain, nonatomic) UIColor *highlightedShadowColor; // @synthesize highlightedShadowColor=_highlightedShadowColor;
@property(nonatomic) struct CGSize highlightedShadowOffset; // @synthesize highlightedShadowOffset=_highlightedShadowOffset;
@property(nonatomic) float highlightedShadowRadius; // @synthesize highlightedShadowRadius=_highlightedShadowRadius;
@property(nonatomic) float shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(retain, nonatomic) NSDictionary *activeLinkAttributes; // @synthesize activeLinkAttributes=_activeLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(retain, nonatomic) NSArray *links; // @synthesize links=_links;
@property(retain, nonatomic) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
@property(nonatomic) unsigned int dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) id <TTTAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct __CTFramesetter *highlightFramesetter; // @synthesize highlightFramesetter=_highlightFramesetter;
@property(nonatomic) struct __CTFramesetter *framesetter; // @synthesize framesetter=_framesetter;
@property(copy, nonatomic) NSAttributedString *renderedAttributedText; // @synthesize renderedAttributedText=_renderedAttributedText;
@property(copy, nonatomic) NSAttributedString *inactiveAttributedText; // @synthesize inactiveAttributedText=_inactiveAttributedText;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(int)arg2;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setHighlighted:(BOOL)arg1;
- (void)setText:(id)arg1 afterInheritingLabelAttributesAndConfiguringWithBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id text; // @dynamic text;
- (void)drawStrike:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawBackground:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawFramesetter:(struct __CTFramesetter *)arg1 attributedString:(id)arg2 textRange:(CDStruct_dff5684f)arg3 inRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (id)linkAtCharacterIndex:(long)arg1;
- (void)addLinkToDate:(id)arg1 timeZone:(id)arg2 duration:(double)arg3 withRange:(struct _NSRange)arg4;
- (void)addLinkToDate:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addLinkToPhoneNumber:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addLinkToAddress:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addLinkToURL:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addLinkWithTextCheckingResult:(id)arg1;
- (void)addLinksWithTextCheckingResults:(id)arg1 attributes:(id)arg2;
- (void)addLinkWithTextCheckingResult:(id)arg1 attributes:(id)arg2;
- (void)setNeedsFramesetter;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

