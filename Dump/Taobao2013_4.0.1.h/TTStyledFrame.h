//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TTStyledElement;

@interface TTStyledFrame : NSObject
{
    TTStyledElement *_element;
    TTStyledFrame *_nextFrame;
    struct CGRect _bounds;
}

@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) TTStyledFrame *nextFrame; // @synthesize nextFrame=_nextFrame;
@property(readonly, nonatomic) TTStyledElement *element; // @synthesize element=_element;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (id)font;
@property(nonatomic) float height;
@property(nonatomic) float width;
@property(nonatomic) float y;
@property(nonatomic) float x;
- (void)dealloc;
- (id)initWithElement:(id)arg1;

@end
