//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface GCKPB_PBString : NSString
{
    NSString *string_;
    NSData *data_;
    int lock_;
}

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)initStringValue;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

