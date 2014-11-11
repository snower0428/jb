//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MobClickSBJsonBase.h"

#import "MobClickSBJsonParser.h"

@interface MobClickSBJsonParser : MobClickSBJsonBase <MobClickSBJsonParser>
{
    const char *c;
}

+ (void)initialize;
- (BOOL)scanIsAtEnd;
- (BOOL)scanNumber:(id *)arg1;
- (BOOL)scanHexQuad:(unsigned short *)arg1;
- (BOOL)scanUnicodeChar:(unsigned short *)arg1;
- (BOOL)scanRestOfString:(id *)arg1;
- (BOOL)scanRestOfDictionary:(id *)arg1;
- (BOOL)scanRestOfArray:(id *)arg1;
- (BOOL)scanRestOfNull:(id *)arg1;
- (BOOL)scanRestOfFalse:(id *)arg1;
- (BOOL)scanRestOfTrue:(id *)arg1;
- (BOOL)scanValue:(id *)arg1;
- (id)objectWithString:(id)arg1;
- (id)fragmentWithString:(id)arg1;

@end

