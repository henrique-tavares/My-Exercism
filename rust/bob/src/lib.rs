pub fn reply(mut message: &str) -> &str {
    message = message.trim_matches(char::is_whitespace);

    if message.is_empty() {
        return "Fine. Be that way!";
    }

    let question = message.ends_with('?');
    let all_capital = message.chars().all(|c| {
        if c.is_alphabetic() {
            c.is_uppercase()
        } else {
            true
        }
    }) && message.chars().any(|c| c.is_alphabetic());

    match (question, all_capital) {
        (true, true) => "Calm down, I know what I'm doing!",
        (true, false) => "Sure.",
        (false, true) => "Whoa, chill out!",
        (false, false) => "Whatever.",
    }
}
