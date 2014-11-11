//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyledNode.h"

@class NSString;

@interface TTStyledElement : TTStyledNode
{
    TTStyledNode *_firstChild;
    TTStyledNode *_lastChild;
    NSString *_className;
}

@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) TTStyledNode *lastChild; // @synthesize lastChild=_lastChild;
@property(readonly, nonatomic) TTStyledNode *firstChild; // @synthesize firstChild=_firstChild;
- (id)getElementByClassName:(id)arg1;
- (void)replaceChild:(id)arg1 withChild:(id)arg2;
- (void)addText:(id)arg1;
- (void)addChild:(id)arg1;
- (id)outerHTML;
- (id)outerText;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithText:(id)arg1 next:(id)arg2;
- (id)initWithText:(id)arg1;

@end

