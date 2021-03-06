//
//  LXPlayerState+Private.h
//
//  This file is part of LyricsX - https://github.com/ddddxxx/LyricsX
//  Copyright (C) 2019  Xander Deng. Licensed under LGPLv3.
//

#import "LXPlayerState.h"

NS_ASSUME_NONNULL_BEGIN

@interface LXPlayerState()

- (instancetype)initInternal;

+ (instancetype)stopped;

@end

@interface LXStoppedPlayerState : LXPlayerState

@end

@interface LXStartTimePlayerState : LXPlayerState

@property (nonatomic) NSDate *startTime;

- (instancetype)initWithStartTime:(NSDate *)date;

@end

@interface LXCurrentTimePlayerState : LXPlayerState

@property (nonatomic) LXPlaybackState state;
@property (nonatomic) NSTimeInterval currentTime;

- (instancetype)initWithState:(LXPlaybackState)state playbackTime:(NSTimeInterval)time;

@end

NS_ASSUME_NONNULL_END
