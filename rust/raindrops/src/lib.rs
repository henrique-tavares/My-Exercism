pub fn raindrops(n: u32) -> String {
    let mut rain_sound = String::new();

    if n % 3 == 0 {
        rain_sound.push_str("Pling");
    }
    if n % 5 == 0 {
        rain_sound.push_str("Plang");
    }
    if n % 7 == 0 {
        rain_sound.push_str("Plong");
    }

    if !rain_sound.is_empty() {
        rain_sound
    } else {
        n.to_string()
    }
}
