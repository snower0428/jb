//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMTradeDetailBaseView.h"

@class NSArray, NSString;

@interface TMTradeTipView : TMTradeDetailBaseView
{
    BOOL _highlighted;
    BOOL _canSelected;
    BOOL _drawSep;
    NSString *_title;
    NSArray *_details;
}

+ (float)calculateHeight:(id)arg1 details:(id)arg2 canSelected:(BOOL)arg3;
@property(nonatomic) BOOL drawSep; // @synthesize drawSep=_drawSep;
@property(nonatomic) BOOL canSelected; // @synthesize canSelected=_canSelected;
@property(retain, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (float)drawContent:(struct CGContext *)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;

@end

