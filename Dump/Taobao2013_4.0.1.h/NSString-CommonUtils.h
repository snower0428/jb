//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (CommonUtils)
+ (id)splitString:(id)arg1 forWidth:(int)arg2 useFont:(id)arg3;
+ (id)actionPageUrl:(id)arg1;
+ (BOOL)desDecrypt:(const char *)arg1 length:(int)arg2 key:(id)arg3 outData:(char *)arg4 outLen:(unsigned int *)arg5;
+ (BOOL)decTMSecretKey:(short *)arg1 length:(int)arg2 rear:(const char *)arg3 outData:(char *)arg4 outLen:(int *)arg5;
+ (id)getRandUUIDKey;
+ (id)stringWithInt:(int)arg1;
- (id)urlStringWithEncode:(int)arg1;
- (id)stringByRemovingControlCharacters;
- (BOOL)hasPrefixCaseInsensitive:(id)arg1;
- (struct _NSRange)rangeOfTFSSuffix;
- (id)stringFromMD5;
@end
