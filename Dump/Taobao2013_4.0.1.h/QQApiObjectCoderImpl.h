//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class QQApiObject;

__attribute__((visibility("hidden")))
@interface QQApiObjectCoderImpl : NSObject <NSCoding>
{
    QQApiObject *_obj;
}

@property(retain, nonatomic) QQApiObject *obj; // @synthesize obj=_obj;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

