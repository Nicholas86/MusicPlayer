//
//  LXMusicTrack+Private.h
//
//  This file is part of LyricsX - https://github.com/ddddxxx/LyricsX
//  Copyright (C) 2019  Xander Deng. Licensed under LGPLv3.
//

#if OS_MACOS || (TARGET_OS_MAC && !TARGET_OS_IPHONE)

#import "LXMusicTrack.h"
#import "Music.h"
#import "Spotify.h"
#import "Swinsian.h"

NS_ASSUME_NONNULL_BEGIN

@interface LXScriptingTrack : LXMusicTrack

+ (nullable NSString *)persistentIDKey;
+ (nullable NSString *)titleKey;
+ (nullable NSString *)albumKey;
+ (nullable NSString *)artistKey;
+ (nullable NSString *)durationKey;
+ (nullable NSString *)fileURLKey;
+ (nullable NSString *)artworkKey;

+ (nullable NSString *)persistentIDForTrack:(SBObject *)sbTrack;

- (instancetype)initWithPersistentID:(NSString *)persistentID NS_UNAVAILABLE;
- (nullable instancetype)initWithSBTrack:(SBObject *)track NS_DESIGNATED_INITIALIZER;

@end

@interface LXAppleMusicTrack : LXScriptingTrack
@end

@interface LXSpotifyTrack : LXScriptingTrack
@end

@interface LXSwinsianTrack : LXScriptingTrack
@end

NS_ASSUME_NONNULL_END

#endif
