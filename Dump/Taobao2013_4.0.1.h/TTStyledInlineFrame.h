//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyledBoxFrame.h"

@interface TTStyledInlineFrame : TTStyledBoxFrame
{
    TTStyledInlineFrame *_inlinePreviousFrame;
    TTStyledInlineFrame *_inlineNextFrame;
}

@property(nonatomic) TTStyledInlineFrame *inlineNextFrame; // @synthesize inlineNextFrame=_inlineNextFrame;
@property(nonatomic) TTStyledInlineFrame *inlinePreviousFrame; // @synthesize inlinePreviousFrame=_inlinePreviousFrame;
@property(readonly, nonatomic) TTStyledInlineFrame *inlineParentFrame;

@end

