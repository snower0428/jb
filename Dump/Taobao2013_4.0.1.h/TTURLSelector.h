//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTURLSelector : NSObject
{
    NSString *_name;
    SEL _selector;
    TTURLSelector *_next;
}

@property(retain, nonatomic) TTURLSelector *next; // @synthesize next=_next;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)perform:(id)arg1 returnType:(int)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

