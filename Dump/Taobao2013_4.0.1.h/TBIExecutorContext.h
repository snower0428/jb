//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TBIExecutorContext : NSObject
{
    BOOL _needReplay;
    BOOL _cancelLogin;
    NSMutableDictionary *_attribute;
}

@property(nonatomic) BOOL cancelLogin; // @synthesize cancelLogin=_cancelLogin;
@property(nonatomic) BOOL needReplay; // @synthesize needReplay=_needReplay;
@property(readonly, nonatomic) NSMutableDictionary *attribute; // @synthesize attribute=_attribute;
- (void).cxx_destruct;
- (id)init;

@end

