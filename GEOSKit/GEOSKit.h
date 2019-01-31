//
//  GEOSKit.h
//  GEOSKit
//
//  Created by Kyle Hankinson on 2019-01-31.
//  Copyright © 2019 Hankinsoft Development, Inc. All rights reserved.
//

#if TARGET_OS_IPHONE
@import UIKit;
#elif !TARGET_OS_IPHONE && TARGET_OS_MAC
#import <Cocoa/Cocoa.h>
#endif

#import "geos_c.h"
#import "export.h"

//! Project version number for GEOSKit.
FOUNDATION_EXPORT double GEOSKitVersionNumber;

//! Project version string for GEOSKit.
FOUNDATION_EXPORT const unsigned char GEOSKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GEOSKit/PublicHeader.h>


