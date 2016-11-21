#include "actor.h"
#include "info.h"
#include "p_local.h"
#include "p_spec.h"
#include "a_sharedglobal.h"
#include "m_random.h"
#include "gi.h"
#include "doomstat.h"
#include "gstrings.h"
#include "g_level.h"
#include "p_enemy.h"
#include "a_specialspot.h"
#include "templates.h"
#include "m_bbox.h"
#include "portal.h"
#include "d_player.h"
#include "p_maputl.h"
#include "serializer.h"
#include "g_shared/a_pickups.h"

// Include all the other Doom stuff here to reduce compile time
#include "a_painelemental.cpp"
