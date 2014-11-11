//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (EX)
+ (id)graceWeightValue:(double)arg1;
+ (BOOL)desDecrypt:(const char *)arg1 length:(int)arg2 key:(id)arg3 outData:(char *)arg4 outLen:(unsigned int *)arg5;
+ (BOOL)desEncrypt:(char *)arg1 length:(int)arg2 key:(id)arg3 outData:(char *)arg4 outLen:(unsigned int *)arg5;
+ (BOOL)decTMSecretKey:(short *)arg1 length:(int)arg2 rear:(const char *)arg3 outData:(char *)arg4 outLen:(int *)arg5;
+ (BOOL)genTMSecretKey:(char *)arg1 length:(int)arg2 rear:(const char *)arg3 outData:(short *)arg4 outLen:(int *)arg5;
+ (id)getRandUUIDKey;
+ (id)spacesForFont:(id)arg1 Width:(float)arg2;
+ (id)normalDateString;
+ (id)splitString:(id)arg1 forLength:(int)arg2;
+ (id)splitString:(id)arg1 forWidth:(int)arg2 useFont:(id)arg3;
+ (id)UUID;
+ (id)stringWithInt:(int)arg1;
- (id)tbUrlEncoded;
- (id)stringByRemovingControlCharacters;
- (id)floatValueExceptChar;
- (BOOL)isPureNumber;
- (id)minorVersion;
- (id)majorVersion;
- (id)originalURLString;
- (id)escapedURLString;
- (struct _NSRange)rangeOfTFSSuffix;
- (BOOL)hasPrefixCaseInsensitive:(id)arg1;
- (id)formatTaoke;
- (id)decodeHtmlUnicodeCharacters;
- (id)trim;
- (id)md5Value;
- (id)toUIColor;
- (id)tmDateString;
@end

