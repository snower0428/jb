//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyledInline.h"

@class NSString;

@interface TTStyledLinkNode : TTStyledInline
{
    NSString *_URL;
    BOOL _highlighted;
}

@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (void)performDefaultAction;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithText:(id)arg1 URL:(id)arg2 next:(id)arg3;
- (id)initWithURL:(id)arg1 next:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

