//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TMConfigAttrib : NSObject
{
    BOOL _required;
    NSString *_attrName;
    NSString *_attrKey;
    NSString *_attrType;
}

@property(nonatomic) BOOL required; // @synthesize required=_required;
@property(copy, nonatomic) NSString *attrType; // @synthesize attrType=_attrType;
@property(copy, nonatomic) NSString *attrKey; // @synthesize attrKey=_attrKey;
@property(copy, nonatomic) NSString *attrName; // @synthesize attrName=_attrName;
- (void)dealloc;
- (BOOL)isAttrType:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;

@end

